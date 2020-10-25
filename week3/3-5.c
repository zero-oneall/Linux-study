#include "ch3.h"

int main(int argc,char *argv[]){
	FILE *fp;
	char buf[80];
	int ret;
	int i;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test.txt","w"))==NULL){
		perror("open failed!\n");
	}
	printf("Please input bstring you want to store in file:\t");
	//fgets(buf,sizeof(buf),stdin);
	for(i=0;i<argc;i++){
		strcat(buf,argv[i]);
	}
	printf("COntent is %s.The size of stream is %ld bytes.\n",buf,sizeof(buf));
	ret=fwrite(buf,4,sizeof(buf)/4,fp);
	printf("Actual writing number of items is %d\n ",ret);
	fclose(fp);
	return 0;
}

