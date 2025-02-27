# include <stdio.h>

int main (){

    // values will be taken from the user end 

    int a , b ;    // these are veriables 

    scanf("%d\n",&a); // taking values for a 
    scanf( "%d\n",b); // taking values for b 

    printf("value of a : %d\n", a);
    printf("The value of b: %d\n", b);

    int c= a+b-65*98 ;

    scanf("%d\n",&c);   // overwride the value of c 

    printf( "%d\n",c);
 
    return 0;


}