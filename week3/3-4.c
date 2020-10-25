#include "ch3.h"

int main(){
	FILE *fp;
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	if((fp=fopen("./test.txt","w"))==NULL){
		perror("open failed!\n");
	}
	printf("Please input bstring you want to store in file:\t");
	fgets(buf,sizeof(buf),stdin);
	printf("COntent is %s.The size of stream is %ld bytes.\n",buf,sizeof(buf));
	ret=fwrite(buf,1,sizeof(buf),fp);
	printf("Actual writing number of items is %d\n ",ret);
	fclose(fp);
	return 0;
}

