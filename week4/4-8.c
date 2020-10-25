#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>
#include<time.h>
void err_exit(char *s)
{
printf("Usage:%s id failed!\n",s);
exit(0);
}
int main()
{
int fd;
if((fd=open("./out.dat",O_WRONLY|O_TRUNC))==-1)
err_exit("open!");
if(dup2(fd,STDOUT_FILENO)==-1)
err_exit("Readirect!\n");
printf("This is test data for redirect!\n");
return 0;
}
