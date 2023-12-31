#ifndef MAIN_H
#include <stdio.h>
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *a);
char *_strpbrk(char *s, char *accept);

void print_diagsums(int *a, int size);
int _putchar(char c);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
oid set_string(char **s, char *x);






#endif
