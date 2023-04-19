#include <stdio.h>

int sum(int a, int b){
    int c = 15;
    c = a + b;
    return c;
}

int main(){
    int a, b, c;
	a = 1, b = 2, c = 3;
	b = 15 + a*10 + c;
	if (a > b) {
		b = a + (c % 10);
	} else {
		b = a + b;
	}
		a = a + sum(b, c);
	
	for (int i = 0; i < 15; i++){
		i += 1;
		a = a + b;
	}
	// std::cout<<b<<"\n";
	
    // printf("%d",b);
    return 0;
}
