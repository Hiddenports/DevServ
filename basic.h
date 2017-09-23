/* Basic Headers */
#ifndef BASIC_H_
#define BASIC_H_
#ifndef STDIO_H_
#include <stdio.h>
#endif
#ifndef STDLIB_H_
#include <stdlib.h>
#endif
#ifndef STRING_H_
#include <string.h>
#endif
#ifndef BYTE
typedef unsigned char byte;
#define BYTE
#endif
#ifndef BASIC_STRING
typedef void* ptr;
#define BASIC_STRING
#endif
#ifndef PTHREAD_H_
#include <pthread.h>
#endif
/* Basic Functions */
void err(char mesg[100]) {
	printf("[ERROR] %s\n", mesg);
	exit(1);
}
void error(char mesg[100], int code) {
	printf("[ERROR] %s\n", mesg);
	exit(code);
}
void sgets(char *buffer) {
	memset(buffer, '\0', strlen(buffer));
	fgets(buffer, sizeof(buffer), stdin);
	return;
}
pthread_t async(ptr function, ptr arg) {
	pthread_t bgwork;
	pthread_create(bgwork, NULL, function, (void *) arg);
	return bgwork;
}
int cmpstr(char *buf, char buf2[100]) {
	int ret;
	ret = strcmp(buf, buf2);
	if(ret == 0)
		return 1;
	else
		return 0;
}
int getarch() {
	return (sizeof(int) * 8);
}
#endif
