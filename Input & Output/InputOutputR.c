#include <stdio.h>
int main(){
	char N[11], M[101], C;
	int O;
	 
	scanf("%s", &N);
	getchar();
	scanf("%[^\n]", &M);
	getchar();
	scanf("%c %d", &C, &O);
	getchar();
	
	printf("Id    : %s\n", N);
	printf("Name  : %s\n", M);
	printf("Class : %c\n", C);
	printf("Num   : %d\n", O);
	
	return 0;
}
