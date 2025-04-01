#include <stdio.h>
int main(){
	int n,p,c=0;
	printf("Enter the order of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	int sn;
	printf("Enter the element to be searched\n");
	scanf("%d",&sn);
	for(int i = 0;i < n;i++){
		if(a[i] == sn){
		 	p = i;
			c++;	
		}
	}
	if(c != 0){
		printf("Element found at index %d\n",p+=1);
	}
	else{
		printf("Element not found\n");
	}
}
