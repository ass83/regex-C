//
// Created by 陈宇轩 on 2024/7/23.
//
#include"regex_my.h"
#include<stdio.h>
#include "string.h"
#include<stdlib.h>
/*
 * 该函数返回值若为1匹配成功
 * 返回值为0匹配失败
*/
int REG_IP(char *str)
{
    regex_t *preg=malloc(sizeof (*preg));
    int errcode=regcomp(preg, IP_GEG , REG_EXTENDED| REG_ICASE);
    char * errbuf= malloc(256);
    regmatch_t pmatch[4];
    memset(pmatch,0,sizeof(pmatch));
    int i;
    if(errcode)//errcode!=0编译失败
    {
        printf("正则表达式编译失败");
        regerror(errcode,preg,errbuf,256);
        free(preg);
        printf("%s",errbuf);
        return 0;
    }
    else//errcode==0编译成功
    {
        regexec(preg, str, 1, pmatch, 0);
        for(i=0;i<4;i++)
        {
            printf("[ %d , %d )\n",pmatch[i].rm_so,pmatch[i].rm_eo);
        }
        regfree(preg);
        free(errbuf);
        return 1;
    }
}
