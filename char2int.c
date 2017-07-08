#include"stdio.h"
//函数的申明 
int change(char x);
 
int main(){
	/*Hi 
	My name is Kylie*/
	char A;
	int result1;
	int result2;
	A='A';
	result1=change(A);
	result2=change('A');
	printf("%d \n",result1);
	printf("%d \n",result2);	
	return 0;
}

//函数定义 
int change(char x){
	int result;
	// this is change the type from char to int 
	result=(int)x;
	return result;
}
