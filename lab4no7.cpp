#include <stdio.h>
int main(){
	int column,row;
	char a; 
	scanf("%c %d %d", &a,&column,&row);
	int i =1;
	while (i<=row){
		for(int j=1; j<=column ;j++){
			printf("%c",a);
		}
		printf("\n");
		i++;
		}
	return 0;
}
