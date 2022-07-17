## About

#### Description
This is the fastest command line tool for calculating differences of big numbers with infinite precision.

It's written in C with extreme efficiency and simplicity.

#### License
[MIT License](https://github.com/liamloads/c-precision-subtraction/blob/main/LICENSE)

## Installation

#### Unix
``` console
cd
git clone https://github.com/liamloads/c-precision-subtraction.git
cd c-precision-subtraction
gcc -o c-precision-subtraction precision-subtraction.c
```

## Usage

#### Details

The command line interface accepts two numeric arguments.

The result is the first argument subtracted by the second argument.

#### Examples

``` console
./c-precision-subtraction 1 10
-9

./c-precision-subtraction 30 4
26

./c-precision-subtraction 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000
0

./c-precision-subtraction 123456789123456789123456789123456789123456789123456789 1
123456789123456789123456789123456789123456789123456788

./c-precision-subtraction 123456789123456789123456789123456789123456789123456789.10 1.001
123456789123456789123456789123456789123456789123456788.099

./c-precision-subtraction 0000000000 0
0

./c-precision-subtraction -00 10
-10

./c-precision-subtraction -000123456.00000078900 10.2340
-123466.234000789

./c-precision-subtraction -0.000000123456789123456789 1.01010101010101010101010101010101
-1.01010113355779922446689001010101

./c-precision-subtraction 1 _
false
```
