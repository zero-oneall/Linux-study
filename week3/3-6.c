#include "ch3.h"

int main(int argc,char *argv[]){
	FILE *fp;
	int i;
	if((fp=fopen("./test6.txt","w"))==NULL){
		perror("open failed!\n");
	}
	for(i=0;i<argc;i++){
		fprintf(fp,argv[i]);
	}
	fclose(fp);
	return 0;
}

