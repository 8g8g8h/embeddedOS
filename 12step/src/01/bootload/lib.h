#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

void *memset(void *b,int c,long len);
void *memcpy(void *dst,const void *src,long len);
int memcmp(const void *b1,const void *b2,long len);
int strlen(const char *s);
char *strcpy(char *dst,const char *src);
int strcmp(const char *s1,const char *s2);
int strncmp(const char *s1,const char *s2, int len);


//1文字送信
int putc(unsigned char c);
//文字列送信
int puts(unsigned char *str);

int putxval(unsigned long value,int column); /*数値の16進表示*/

#endif
