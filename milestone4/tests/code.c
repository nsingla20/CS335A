// int sum(int a, float b){
//     int c = 15;
//     c = a + b;
//     return c;
// }
#include <stdio.h>

int main(){
    int a, b, c;
	a = 1, b = 2, c = 3;

	b = 15 + a*2 + c;
	// if (a > b)
	// 	a = a + sum(b, c);
	
	// for (int i = 0; i < 15; i++){
	// 	i += 1;
	// 	a = a + b;
	// }
	// std::cout<<b<<"\n";
    printf("%d",b);
    return 0;
}
