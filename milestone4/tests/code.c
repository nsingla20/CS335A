int sum(int a, int b,int c1,int d,int e,int f,int g){
    int c = 15;
    c = a + b+d+e+f+g;
    return c;
}
int my(int a){
    sum(1,2,3,4,5,6,7);
	return 0;
}
#include <stdio.h>

int main(){
    // int a= sum(1,2,3,4,5,6,7);
	// int a,b,c,d,e;
	int a=1,b=2;
	if(a<b)b=a;
	my(b);
    return a;
}


/*

base
base - 4
base - 8     f = 7
base - 12    c = 8
base - 16    b = 3
base - 20    a = 4

*/
