#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

/**
 * struct linklst - contains info for the list
 * @str: is a string
 * @m: is an integer
 * @next: pointer to the next node
 */
typedef struct linklst
{
	char *str;
	int m;
	struct linklst *next;
} list_t;

/**
 * struct infomation - containts information of alist
 * @arg: argument pointer
 * @status: return status
 * @argc: arg count
 * @argv: arg vector
 * @filename: pointer to the file
 * @env: data to the env
 * @readfile: the file to which to read
 * @er_num: error code
 */
typedef struct infomation
{
	char *arg;
	int status;
	int argc;
	char **argv;
	char *filename;
	list_t *env;
	int readfile;
	int er_num;
} more_t;

char **string_split(char *str, char z);
char getline_func(void);
int interactive_mode(more_t *more);
size_t print_current_env(const list_t *);
int current_env(more_t *more);
void _puts(char *);
void _mputs(char *strr);
int _putchar(char k);
int _mputchar(char k);
void print_error_msg(more_t *more, char *err);
void clear_comments_frm_code(char *temp);
ssize_t read_buffer_size(more_t *more, size_t *sze, char *temp_buf);
char *allocate_mem(char byt, char *str, unsigned int bre);
int free_mem(void **px);
int exit_cmd(more_t *more);
int error_atoi(char *str);
int delim_check(char m, char *d);
int alpha_check(int m);

#endif
