#include <stdio.h>
int fact(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int n;
	printf("Enter a number \n");
        scanf("%d",&n);
	int p = n;
	int s = 0;
	while(n!=0){
		int r = n%10;
		s = s+ fact(r);
		n = n/10;
	}
	if(s == p){
		printf("%d is a Strong number\n",p);
	}
	else{
		printf("%d is not a Strong number\n",p);
	}
	return 0;
}
