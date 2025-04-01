#include <stdio.h>
int main(){
	int n;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=(n-i);j++){
			printf("  ");
		}
		for(int k = 1;k<=(i*2)-1;k++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i = 1;i<=n;i++){
                for(int j = 1;j<=i;j++){
                        printf("  ");
                }
                for(int k = ((n-1)*2)-i;k>=i;k--){
                        printf("* ");
                }
                printf("\n");
        }

              }
