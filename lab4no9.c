#include <stdio.h>
int main(){
	int score;
	while (score != -1){
		scanf("%d",&score);
		if (score < 68){
			if (score == -1)
				printf("");
			else if (score<0)
				printf("error score\n");
			else if ( score < 55){
				printf("%d",score);
				printf("(F)\n");
			} else {
				printf("%d",score);
				printf("(D)\n");
			}
		} else {
			if (score > 100)
				printf("error score\n");
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
