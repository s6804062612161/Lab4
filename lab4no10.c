#include <stdio.h>
int main(){
	int score=0,a=0,b=0,c=0,d=0,f=0;
	while (1){
		scanf("%d",&score);
		if (score < 68){
			if (score == -1)
				break;
			else if (score<0)
				printf("error score\n");
			else if ( score < 55){
				printf("%d",score);
				printf("(F)\n");
				f = f+1;
			} else {
				printf("%d",score);
				printf("(D)\n");
				d = d+1;
			}
		} else {
			if (score > 100)
				printf("error score\n");
			else if (score < 75){
				printf("%d",score);
				printf("(C)\n");
				c = c+1;
			} else {
				if ( score < 85){
					printf("%d",score);
					printf("(B)\n");
					b = b+1;
				} else {
					printf("%d",score);
					printf("(A)\n");
					a = a+1;
				}
			}
		}
	}
	printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)\n",a,b,c,d,f);
	return 0;
}
