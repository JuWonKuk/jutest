#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//char ptr[] = "move position 30,20";
	char *ptr = strdup("move position 30,20");
	char *ptrTemp;

	ptrTemp = strtok(ptr, " ");

	printf("%s \r\n", ptrTemp);
	printf("%s \r\n", strtok(NULL," "));
	//strtok " " 끊어서 읽음
	ptrTemp = strtok(NULL,",");
	printf("%d \r\n", atoi(ptrTemp)+1 );

	ptrTemp = strtok(NULL,",");
	printf("%d \r\n", atoi(ptrTemp)+2 );

	//printf("%s \r\n", strtok(NULL," "));
	return 0;
}
