## About

#### Description
This is a fast and memory-efficient calculator tool for differences of big numbers with full precision.

It's written in ANSI C and can be compiled as a lightweight binary on any operating system with any programming language that supports command line execution.

#### License
[MIT License](https://github.com/twexxor/subtraction/blob/main/LICENSE)

#### Size
5.43 KB

#### Version
v1.0.0

## Installation

#### Linux
``` console
cd
git clone https://github.com/twexxor/subtraction.git
cd subtraction
gcc -o twexxor-subtraction subtraction.c
```

## Usage

``` console
./twexxor-subtraction 1 10


./twexxor-subtraction 30 4


./twexxor-subtraction 0.000000000000000000000000000000000000000000000000100 0.0000000000000000000000000000000000000000000000001000


./twexxor-subtraction 123456789123456789123456789123456789123456789123456789 1


./twexxor-subtraction 123456789123456789123456789123456789123456789123456789.10 1.001


./twexxor-subtraction 0000000000 0
0

./twexxor-subtraction -00 10
-10

./twexxor-subtraction -000123456.00000078900 10.2340


./twexxor-subtraction -0.000000123456789123456789 1.01010101010101010101010101010101


./twexxor-subtraction 1 _
false
