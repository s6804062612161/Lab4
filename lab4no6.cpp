#include <stdio.h>
int main(){
	int t;
	char a; 
	scanf("%c %d", &a,&t);
	int i =1;
	while (i<=t){
		for(int j=1; j<=t ;j++){
			printf("%c",a);
		}
		printf("\n");
		i++;
		}
	return 0;
}
