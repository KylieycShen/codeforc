#include "stdio.h"
int f(int x){
	int a;
	a=5+x;
	return a;
}

int main(){
	int b;
	int y;
	b=1;
	y=f(b);
	printf(" %d\n", y);
	return y;
	
}
	
