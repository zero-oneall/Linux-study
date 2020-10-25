#include "ch3.h"

int main(){
	FILE *fp;
	fp=fdopen(1,"w+");//1是已经打开的文件的文件描述符，后面的是文件的的打开方式
	fprintf(fp,"test data %s\n","nihao");

	return 0;
}
