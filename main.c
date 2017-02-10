
#include <stdio.h>

int main(int argc, const char * argv[]) {

    double a,b,c;
    
    printf("请输入三个数，逗号隔开\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    
    double max ;
    
    if ( a >= b ) {
        if ( a >= c ) {
            max = a ;
        } else {
            max = c ;
        }
    } else {
        if ( b >= c ) {
            max = b ;
        } else {
            max = c ;
        }
    }
    
    printf("max num is %f \n", max );
    
    return 0;
}
