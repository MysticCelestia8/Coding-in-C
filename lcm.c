#include <stdio.h>

int main(){
	int a,b,lcm=1;
	printf("Enter 2 numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int a1 = a,b1 = b;
	int i = 2;
	while (a > 1 || b > 1) {  
        // Check if i divides either of the numbers  
        if (a % i == 0 || b % i == 0) {  
            lcm *= i;  
            
            // Divide number by i if divisible  
            if (a % i == 0)  
                a = a / i;  
            if (b % i == 0)  
                b = b / i;  
        }  
        else {  
            i++;  
        }  
    } 
	printf("LCM of %d and %d is %d\n",a1,b1,lcm);
}
