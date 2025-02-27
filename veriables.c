# include<stdio.h>

int main ()
{
    int a = 234 ;     // these are global veriables 
    int b= 8469;         
    printf( "%d\n" ,a+b);

    // create local veriables 

    void add () ;
    {
        int c= a+b ;      // here c is a local veriable 

        printf( "%d\n",c);
    };
    
       // creating a constant veriable 

        
    const char tarun_const = 't';   // here tarun_const is a constant veriable 
    

    printf ( "%c\n",tarun_const);


    return 0 ;


}