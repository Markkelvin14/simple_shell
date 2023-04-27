#ifndef main_h
#define main_h

#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define USE_DELIM " ,!¡¿?\'\"\n\t"
#define STDOUT STDOUT_FILENO
#define STDIN STDIN_FILENO
#define STDERR STDERR_FILENO

extern char **environ;
int exe_cmd(char **str, int res);
void print_error_msg(char *str);
char *check_line(void);
char *_path(char **str);
char *check_env(void);
int check_cmdargs(char **str, int res);
int string_count(char *str);
char *_mstrcpy(char *loc, char *souc);
int _mstrcmp(char *string1, char *string2);
int _mstrncmp(char *string1, char *string2, int length);
char *_mstrncat(char *loc, char *souc);
char **token_check(char *temp_buf);
int check_builtin(char **str, int res, char *bre);
int built_in_cmd(char **str, int res, char *bre);

#endif
