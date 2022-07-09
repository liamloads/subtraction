## About

#### Description
This is a fast and memory-efficient calculator tool for differences of big numbers with full precision.

It's written in C and can be compiled as a lightweight binary to be used with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/liamloads/subtraction/blob/main/LICENSE)

## Installation

#### Linux
``` console
cd
sudo git clone https://github.com/liamloads/subtraction.git
cd subtraction
sudo gcc -o subtraction subtraction.c
```

## Usage

#### Details

The command line interface accepts two numeric parameters.

The result is the first parameter subtracted by the second parameter.

#### Examples

``` console
./subtraction 1 10
-9

./subtraction 30 4
26

./subtraction 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000
0

./subtraction 123456789123456789123456789123456789123456789123456789 1
123456789123456789123456789123456789123456789123456788

./subtraction 123456789123456789123456789123456789123456789123456789.10 1.001
123456789123456789123456789123456789123456789123456788.099

./subtraction 0000000000 0
0

./subtraction -00 10
-10

./subtraction -000123456.00000078900 10.2340
-123466.234000789

./subtraction -0.000000123456789123456789 1.01010101010101010101010101010101
-1.01010113355779922446689001010101

./subtraction 1 _
false
```
