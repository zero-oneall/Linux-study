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
int n,fd;
char buf;
fd=open("./file.test",O_CREAT|O_RDWR,0644);
srand(time(0));
n=rand()%26;
buf=(char)('A'+n);
printf("n=%c\n",buf);
write(fd,&buf,1);
sleep(50);
lseek(fd,10,SEEK_SET);
srand(time(0));
n=rand()%26;
buf=(char)('A'+n);
write(fd,&buf,1);
close(fd);
return 0;
}
