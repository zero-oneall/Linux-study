#include "ch3.h"

int main(){
	FILE *fp;
	int fd;
	fd=open("./test9.txt",O_RDWR);
	fp=fdopen(fd,"w+");
	fprintf(fp,"test data %s\n","nihao");
	fclose(fp);
	return 0;
}
