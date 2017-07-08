#include"stdio.h"
#include"math.h"
//函数申明 
int isPirmeNumber(int N); 
int main(){
	int A;
	int B;
	int res1;
	int sum=0;
	scanf("%d",&A);
	scanf("%d",&B);
	
//	for(int i=0;i<5;i++)
/*	while(A<=B){
		sum= sum+A;
		A=A+1;
	}*/
	res1=isPirmeNumber(A);
	if(res1 == 1){
		printf("%d is prime Number \n",A);	
	}else if(res1 == 0){
		printf("%d is not prime Number \n",A);
	}
	res1=isPirmeNumber(B);
	if(res1 == 1){
		printf("%d is prime Number \n",B);	
	}else if(res1 == 0){
		printf("%d is not prime Number \n",B);
	}
	printf ("The sum is %d\n",sum);
	
	return 0;
}

//函数定义 
int isPirmeNumber(int N){
	for(int i=2;i<=sqrt(N);i++){
		if(N%2 == 0){
			return 0;
		}
	}
	return 1;
}
