#include "ch3.h"

int main(){
	FILE *fp;
	char buf[80];
	memset(buf,80,sizeof(buf));
	fp=fopen("./test10.txt","a+");
	fputs("append new information!",fp);
	fp=freopen("./test10.txt","r",fp);
	fgets(buf,sizeof(buf),fp);
	printf("Content of file is %s\n",buf);
	fclose(fp);

	return 0;
}
