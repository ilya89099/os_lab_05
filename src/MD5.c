#include "MD5.h"

md5 make_hash(unsigned long long p1, unsigned long long p2) {
    return (md5){.part1 = p1, .part2 = p2};
}

char get_hex_digit(unsigned number) {
    if (number < 10) {
        return '0' + number;
    } else {
        return 'A' + number - 10;
    }
}

char* hash_to_string(md5 hash) {
    char* result = malloc(sizeof(char) * 33);
    result[32] = '\0';
    for (int i = 0; i < 32; ++i) {
        unsigned long long* number = (i < 16 ? &hash.part1 : &hash.part2);
        unsigned cur_bits = ((*number) >> ((15 - i) * 4)) & 15u;
        result[i] = get_hex_digit(cur_bits);
    }
    return result;
}