#include <stdio.h>

void _0(char _1[], int *_2, int *_3, int *_4) {
    strncat(_1, ".", 1);
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
    strncat(_2, "0", 1);
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
    int _5 = 0;

    while (_3[1][_5++] != '\0') {}

    char _6[_5];
    _6[0] = '\0';
    strncat(_6, _3[1], _5);
    int _7 = 0;
    _0(_6, &_4, &_5, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _8 = 0;
    int _9 = 0;

    while (_3[2][_9++] != '\0') {}

    char _10[_9];
    _10[0] = '\0';
    strncat(_10, _3[2], _9);
    _0(_10, &_8, &_9, &_7);

    if (_7 == -1) {
        printf("false");
        return 0;
    }

    int _11 = _5 - _4;
    int _12 = _9 - _8;
    int _13 = _11 - _12;
    int _14 = ~_13;
    int _15 = 0;

    if ((_14 / _13) == 0) {
        _13 = _14 + 1;
        _15 = 1;
    }

    if (_15 == 0) {
        _9 += _13;
    } else {
        _5 += _13;
    }

    _11 = _5 - _9;
    _12 = 0;
    int _16 = _5;
    int _17 = 0;

    if (_11 == 0) {
        if (_7 != 1) {
            while (_5 != _11) {
                _14 = (_10[_11] + '0') - 96;
                _17 = ((_6[_11] + '0') - 96) - _14;
                _11++;

                if (_17 != 0) {
                    _11 = _5;

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

    _17 = _9;

    if (_12 == 1) {
        _16 = _9;
        _17 = _5;
    }

    char _18[_16];
    _18[0] = '\0';
    char _19[_16];
    _19[0] = '\0';

    if (_12 == 0) {
        strncat(_18, _6, _5);
        strncat(_19, _10, _9);
    } else {
        _4 = _8;
        strncat(_18, _10, _9);
        strncat(_19, _6, _5);
    }

    if (_13 != 0) {
        if (_15 == 0) {
            _6[0] = '\0';
            _1(_6, &_13);

            if (_12 == 0) {
                strncat(_19, _6, _13);
            } else {
                strncat(_18, _6, _13);
            }
        } else {
            if (_13 != 0) {
                _10[0] = '\0';
                _1(_10, &_13);
            }

            if (_12 == 0) {
                strncat(_18, _10, _13);
            } else {
                strncat(_19, _10, _13);
            }
        }
    }

    _5 = 0;
    _8 = 1 - (_7 & 1);
    _16 += _8;
    int _20[_16];

    if (_8 == 1) {
        _4++;
        _5++;
        _20[0] = 0;
    }

    _9 = 0;

    while (_5 != _16) {
        _20[_5++] = (_18[_9++] + '0') - 96;
    }

    _5 = 0;
    _17 += _8;
    int _21[_17];

    if (_8 == 1) {
        _5++;
        _21[0] = 0;
    }

    _8 = _17;
    _9 = 0;

    while (_5 != _8) {
        _21[_5++] = (_19[_9++] + '0') - 96;
    }

    _5 = _16--;
    _8--;

    if (_7 == 1) {
        while (_8 != -1) {
            _9 = _20[_16] + _21[_8--];
            _11 = _16--;
            _20[_11] = _9;
            _9 -= 10;

            while ((_9 & 7) == _9) {
                _20[_11--] = _9;
                _9 = _20[_11] + 1;
                _20[_11] = _9;
                _9 -= 10;
            }
        }
    } else {
        while (_8 != -1) {
            _9 = _20[_16] - _21[_8];
            _11 = _16--;
            _20[_11] = _9;

            if ((_9 & 15) != _9) {
                _20[_11] = (10 + (_21[_8] + _20[_11])) - _21[_8];
                _9 = _20[--_11] - 1;
                _20[_11--] = _9;

                while ((_9 & 15) != _9) {
                    _9 = _20[_11] - 1;
                    _20[_11] = _9;
                    _20[_11-- + 1] = 9;
                }
            }

            _8--;
        }
    }

    if ((_7 == 0) && (_12 == 1)) {
        // todo
        printf("-");
    }

    _7 = -1;
    _8 = 0;

    while (_4 != ++_7) {
        if ((_8 == 1) || (_20[_7] != 0)) {
            _8 = 1;
            printf("%i", _20[_7]);
        }
    }

    if (_8 == 0) {
        printf("0");
    }

    if (_5 != _7) {
        while (_20[--_5] == 0) {}

        if (++_5 != _7) {
            printf(".");

            while (_5 != _7) {
                printf("%i", _20[_7++]);
            }
        }
    }

    // todo
    return 0;
}
