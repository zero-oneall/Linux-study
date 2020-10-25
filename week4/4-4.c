#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include<stdlib.h>
void err_exit(char *s)
{
printf("Usage:%s id failed!\n",s);
exit(0);
}
int main()
{
int fd1,fd2;
char buf[6];
memset(buf,0,6);
fd1=open("./file.hole.2",O_RDONLY);
fd2=open("./file.hole.2",O_RDONLY);
printf("fd1=%d,fd2=%d\n",fd1,fd2);
lseek(fd1,4,SEEK_SET);
read(fd2,buf,5);
printf("fd2 is %s\n",buf);
return 0;
}

