
#ifndef OPENFILES_H
#define OPENFILES_H

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>


bool openFiles(int argc, const char* argv[], FILE** fin, FILE** fout,
                   int min_expected_argc, int max_expected_argc,
                   const char* usage);

void closefiles(int n, ...);

#endif