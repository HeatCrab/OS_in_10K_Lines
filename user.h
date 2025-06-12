#pragma once
#include "common.h"

int readfile(const char *filename, char *buf, int len);
int writefile(const char *filename, const char *buf, int len);
__attribute__((noreturn)) void exit(void);
int getchar(void);
void putchar(char ch);

