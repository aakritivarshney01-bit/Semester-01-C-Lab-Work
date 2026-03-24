#include<stdio.h>

int main (){
	int num,remainder,reversed=0 , sum=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	int original = num;
	
	while(num!=0){
		remainder = num%10;
		reversed = reversed*10+remainder;
		
		sum= sum + remainder;
		
		num = num/10;
	}
	
	printf("Original number:%d\n",original);
	printf("Reversed number:%d\n",reversed);
	printf("Sum of digits:%d\n",sum);
	
	return 0;
	}