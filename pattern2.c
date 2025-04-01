#include <stdio.h>
int main(){
	int n = 1;
	while(n<10){
		switch(n%2){
			case 1:
			{
				for(int j = 1;j<=n-(n-j);j++){
					printf("%d ",j);
				}
			
			break;
			}
			case 0:{
				       printf("\n");
			      
			break;
			       }
		}
		n++;
	}
}
