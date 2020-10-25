#include "ch3.h"

int main(int argc,char *argv[]){
	FILE *fp;
	int i;
	if((fp=fopen("./test7.txt","w"))==NULL){
		perror("open failed!\n");
	}
	for(i=0;i<argc;i++){
		fwrite(argv[i],1,strlen(argv[i]),fp);
		printf("[%d]:\t %s \t %ldbytes\n",i,argv[i],strlen(argv[i]));
	}
	fclose(fp);
	return 0;
}

