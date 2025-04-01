#include <stdio.h>
int prime(int n){
	int c=0;
	for(int i = 2;i < n;i++){
		if(n%i == 0){
			c++;
		}	
	}
	if(c == 0){
		return 1;		
	}
	else{
		return 0;
	}
}
int main(){
	int d,p;
	printf("Enter number of hours per day\n");
	scanf("%d",&d);
	printf("Enter number of parts in a day\n");
	scanf("%d",&p);

	int c = d/p;
	int s = 0,e = 0,a = 0;
	int arr[p];
	if((d>=10 && d < 500) && (p>=2 && p < 50)){
		for(int i = 2; i <= c; i++){
			s = 0;
			for(int j = 0;j < p;j++){
				arr[j] = i + (c*j);
				s++;
			}
			if(s == p){
				e = 0;
				for(int k = 0;k < p;k++){
					if(prime(arr[k]) == 1){
						e++;
					}
				}
				if(e == p){
					a++;
				}
			}
			
		}
		printf("%d\n",a);
	}
	
}
