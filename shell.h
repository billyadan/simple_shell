#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>


/* domain variables */
extern char **domains;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle inherent */
int appraiser(char **cmd, char *buf);
void prompt_consumer(void);
void handle_indication(int z);
char **indicator(char *line);
char *test_pathway(char **pathway, char *command);
char *attach_pathway(char *pathway, char *command);
int handle_inherent(char **command, char *line);
void escape_cmd(char **command, char *line);

void print_domain(void);

/* string handlers */
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

void effect(char *cp, char **cmd);
char *find_pathway(void);

/* helper function for efficient free */
void free_screen(char **buf);

struct inherent
{
	char *domain;
	char *escape;
} inherent;

struct info
{
	int final_escape;
	int ln_count;
} info;

struct flags
{
	bool interchangeable;
} flags;

#endif
