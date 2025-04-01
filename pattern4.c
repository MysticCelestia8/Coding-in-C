#include <stdio.h>

int main(){
		for(int i = 0;i<9;i++){
                	int n = 6;
			for(int l = 5;l>0;l--){
               			 for(int m = l;m > 0;m--){
                       			 printf(" * ");
                	}

        		}
                	for(int j = 1;j<(n-1);j++){
                        	printf("  ");
                	}

                	for(int k = n-1; k >i; k--){
                        	printf("* ");
                	}	
			printf("\n");		
                	
        	}
}

