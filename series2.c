#include <stdio.h>

int main(){
	int num = 1,n,s = 0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		if(i%2!=0){
			s = s - (num/2);
		}
		else{
			s = s + (num/2);
		}
		num +=2;
	}
	printf("Sum is %d\n",s);
	return 0;
}
