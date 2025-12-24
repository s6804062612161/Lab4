#include <stdio.h>
int main(){
	int times;
	char a; 
	scanf("%c %d", &a,&times);
	int i =1;
	while (i<=times){
		for(int j=1; j<=times ;j++){
			printf("%c",a);
		}
		printf("\n");
		i++;
		}
	return 0;
}
