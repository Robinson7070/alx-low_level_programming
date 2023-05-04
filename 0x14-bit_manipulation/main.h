#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int check_valid_string(const char *b);
void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif