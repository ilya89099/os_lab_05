#ifndef LIB_TEST_MD5_H
#define LIB_TEST_MD5_H

#include <stdlib.h>
#include <stdio.h>

typedef struct MD5 {
    unsigned long long part1;
    unsigned long long part2;
} md5;

char get_hex_digit(unsigned number);

md5 make_hash(unsigned long long p1, unsigned long long p2);

char* hash_to_string(md5 hash);

#endif //LIB_TEST_MD5_H
