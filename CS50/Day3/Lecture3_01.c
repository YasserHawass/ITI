#include<stdio.h>
void test_function(int x, int y, int z) {
printf("The value of x: %d\n", x);
printf("The value of y: %d\n", y);
printf("The value of z: %d\n", z);
}
main() {
    /*
int a = 10;
test_function(a++, a++, a++);
*/
int Fact( int n)
{

int result=1, i;
for( i = n; i > 1; i--){
    result *= i;
}

    return i;


}
printf("%d",Fact(5));
}
