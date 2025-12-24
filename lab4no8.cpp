#include <stdio.h>
int main(){
	int times,score;
	scanf("%d",&times);
	for (int i=1; i<=times; i++){
		scanf("%d",&score);
		if (score < 68){
			if (score < 0){
				printf("error score\n");
			}
			else if ( score < 55){
				printf("%d",score);
				printf("(F)\n");
			} else {
				printf("%d",score);
				printf("(D)\n");
			}
		} else {
			if (score > 100){
				printf("error score\n");
			}
			else if (score < 75){
				printf("%d",score);
				printf("(C)\n");
			} else {
				if ( score < 85){
					printf("%d",score);
					printf("(B)\n");
				} else {
					printf("%d",score);
					printf("(A)\n");
				}
			}
		}
	}
	return 0;
}
