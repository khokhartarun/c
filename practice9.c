// print n natural numbers from the user input 

# include <stdio.h>

int main (){

    int a , b = 1 ;
    // taking user input 

    scanf("%d", &a);

    // apply do-while loop 

    do{
        printf( " the value is %d\n", b);
        b++;
    } while(b<=a);

    return 0 ;
    

}