#include <stdio.h>
#include <string.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    strncat(_1, ".", 2);
    int _5 = 0;

    if (_1[0] == '-') {
        *_4 += 1;
        _5++;
    }

    while (_1[_5++] == '0') {}

    int _6 = --_5;
    int _7 = 0;
    int _8 = 0;

    while (_1[_5] != '.') {
        _7 = _1[_5++] - 48;
        _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

        if ((_7 & 15) != _7) {
            *_4 = -1;
            return;
        }

        _8++;
    }

    *_2 = _8;

    if (_1[++_5] != '\0') {
        while (_1[_5] != '.') {
            _7 = _1[_5++] - 48;
            _7 = ~((_7 >> 1) + (_7 - 14)) + 1;

            if ((_7 & 15) != _7) {
                *_4 = -1;
                return;
            }

            _8++;
        }

        if (_1[_5 - 1] == '0') {
            while (_1[--_5] == '0') {
                _8--;
            }
        }
    }

    char _9[_8];
    _9[0] = '\0';
    strncat(_9, &_1[_6++], *_2);
    strncat(_9, &_1[*_2 + _6], _8 - *_2);
    _1[0] = '\0';
    strncat(_1, _9, _8);
    *_3 = _8;
}

void _1(char _2[], int *_3) {
    strncat(_2, "0", 2);
    int _4 = *_3;
    int _5 = 1;

    while ((_4 >>= 1) != 0) {
        strncat(_2, _2, _5);
        _5 <<= 1;
    }

    strncat(_2, _2, *_3 - _5);
}

int main(int _2, char *_3[]) {
    if ((_3[1] == (void *)0) || (_3[2] == (void *)0)) {
        printf("false");
        return 0;
    }

    int _4 = 0;

    while (_3[1][_4++] != '\0') {}

    char _5[_4 + 1];
    _5[0] = '\0';
    strncat(_5, _3[1], _4);
    int _6 = 0;
    int _7 = 0;
    _0(_5, &_6, &_4, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _8 = 0;

    while (_3[2][_8++] != '\0') {}

    char _9[_8 + 1];
    _9[0] = '\0';
    strncat(_9, _3[2], _8);
    int _10 = 0;
    _0(_9, &_10, &_8, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _11 = _4 - _6;
    int _12 = _8 - _10;
    int _13 = _11 - _12;
    int _14 = ~_13;
    int _15 = 0;

    if ((_13 != 0) && ((_14 / _13) == 0)) {
        _13 = _14 + 1;
        _15 = 1;
    }

    if (_15 == 0) {
        _8 += _13;
    } else {
        _4 += _13;
    }

    _11 = _4 - _8;
    _12 = 0;
    int _16 = _4;
    int _17 = 0;

    if (_11 == 0) {
        if (_7 != 1) {
            while (_4 != _11) {
                _14 = _9[_11] - 48;
                _17 = (_5[_11] - 48) - _14;
                _11++;

                if (_17 != 0) {
                    _11 = _4;

                    if ((_14 != -48) && ((_17 & 15) != _17)) {
                            _12 = 1;
                    }
                }
            }

            if (_17 == 0) {
                printf("0");
                return 0;
            }
        }
    } else {
        _14 = ~_11;

        if ((_14 / _11) == 0) {
            _11 = _14 + 1;
            _12 = 1;
        }
    }

    _17 = _8;

    if (_12 == 1) {
        _16 = _8;
        _17 = _4;
    }

    char _18[_16];
    _18[0] = '\0';
    char _19[_16];
    _19[0] = '\0';

    if (_12 == 0) {
        strncat(_18, _5, _4);
        strncat(_19, _9, _8);
    } else {
        _6 = _10;
        strncat(_18, _9, _8);
        strncat(_19, _5, _4);
    }

    if (_13 != 0) {
        if (_15 == 0) {
            _5[0] = '\0';
            _1(_5, &_13);

            if (_12 == 0) {
                strncat(_19, _5, _13);
            } else {
                strncat(_18, _5, _13);
            }
        } else {
            if (_13 != 0) {
                _9[0] = '\0';
                _1(_9, &_13);
            }

            if (_12 == 0) {
                strncat(_18, _9, _13);
            } else {
                strncat(_19, _9, _13);
            }
        }
    }

    _4 = 0;
    _10 = 1 - (_7 & 1);
    _16 += _10;
    int _20[_16];

    if (_10 == 1) {
        _4++;
        _6++;
        _20[0] = 0;
    }

    _8 = 0;

    while (_4 != _16) {
        _20[_4++] = _18[_8++] - 48;
    }

    _4 = 0;
    _17 += _10;
    int _21[_17];

    if (_10 == 1) {
        _4++;
        _21[0] = 0;
    }

    _8 = 0;
    _10 = _17;

    while (_4 != _10) {
        _21[_4++] = _19[_8++] - 48;
    }

    _4 = _16--;
    _10--;

    if (_7 != 1) {
        while (_10 != -1) {
            _8 = _20[_16] + _21[_10--];
            _11 = _16--;
            _20[_11] = _8;
            _8 -= 10;

            while ((_8 & 7) == _8) {
                _20[_11--] = _8;
                _8 = _20[_11] + 1;
                _20[_11] = _8;
                _8 -= 10;
            }
        }
    } else {
        while (_10 != -1) {
            _8 = _20[_16] - _21[_10];
            _11 = _16--;
            _20[_11] = _8;

            if ((_8 & 15) != _8) {
                _20[_11] = (10 + (_21[_10] + _20[_11])) - _21[_10];
                _8 = _20[--_11] - 1;
                _20[_11--] = _8;

                while ((_8 & 15) != _8) {
                    _8 = _20[_11] - 1;
                    _20[_11] = _8;
                    _20[_11-- + 1] = 9;
                }
            }

            _10--;
        }
    }

    if ((_3[_12 + 1][0] == '-') && (_7 != 0)) {
        printf("-");
    }

    _7 = 0;
    _10 = 0;

    while (_6 != _7) {
        if (_20[_7] != 0) {
            _10 = 1;

            while (_6 != _7) {
                printf("%i", _20[_7++]);
            }

            _7--;
        }

        _7++;
    }

    if (_10 == 0) {
        printf("0");
    }

    if (_4 != _7) {
        while (_20[--_4] == 0) {}

        if (++_4 != _7) {
            printf(".");

            while (_4 != _7) {
                printf("%i", _20[_7++]);
            }
        }
    }

    return 0;
}
