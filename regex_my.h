#ifndef _REGEX_MY_H
#define _REGEX_MY_H
#define IP_GEG "([0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3})"
//xxx.xxx.xxx.xxx//ip地址形式

#include <sys/types.h>
#include <regex.h>

int REG_IP(char *str);
int regcomp(regex_t *preg, const char *regex, int cflags);

int regexec(const regex_t *preg, const char *string, size_t nmatch,
            regmatch_t pmatch[], int eflags);

size_t regerror(int errcode, const regex_t *preg, char *errbuf,
                size_t errbuf_size);

void regfree(regex_t *preg);

#endif //_REGEX_MY_H
