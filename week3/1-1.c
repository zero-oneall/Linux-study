#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
char write_buff[]="linux";
char read_buff[50]={0};
void main(void)
{
    //打开文件
    int fd=-1;
    int ret;
    char *pread=NULL;
    fd=open("a.txt",O_RDWR|O_CREAT|O_TRUNC|O_EXCL);
    if(fd<0)
    {
        //printf("打开文件失败\n");
        //return;
        perror("打开文件失败");
        exit(-1);
    }
    printf("打开文件成功\n");

    //写入内容
    ret=write(fd,write_buff,sizeof(write_buff));
    if(ret<0)
    {
        //printf("写入失败\n");
        //return;
        perror("写入失败");
        exit(-1);
    }
    printf("写入成功\n");
    printf("实际写入了%d个字节\n",ret);

    //读出内容
    lseek(fd,-sizeof(write_buff), SEEK_CUR);
    ret=read(fd,read_buff,sizeof(write_buff));
    if(ret<0)
    {
        //printf("读取失败\n");
        //return;
        perror("读取失败");
        exit(-1);
    }
    pread=read_buff;
    printf("读取成功\n");
    printf("读取了%d个字节\n",ret);
    printf("读取的内容是");
    while(*pread !='\0')
    {

        printf("%c",*pread);

        pread++;
    }
    printf("\n");
    //关闭文件
    close(fd);

}

