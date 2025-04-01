#include <stdio.h>
int main(){
	int n;
	printf("Enter the order of the matrix\n");
	scanf("%d",&n);
	int a1[n][n];
	int a2[n][n];
	int a3[n][n];
	printf("Enter the elements of the first matrix\n");
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			scanf("%d",&a1[i][j]);
		}
	}
	printf("Enter the elements of the second matrix\n");
        for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                        scanf("%d",&a2[i][j]);
                }
        }
	for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                        a3[i][j] = a1[i][j] + a2[i][j];
                }
        }
	printf("Resultant matrix:\n");
	for(int i = 0;i < n;i++){
                for(int j = 0;j < n;j++){
                        printf("%d  ",a3[i][j]);
                }
		printf("\n");
        }

}
