// break statement using for loop 

# include<stdio.h>

int main (){

    // veriable for FOR loop 
    for (int i = 0; i < 50; i++)
    {
        if( i== 30){
            // break; // exit from the loop 
            continue;
        }
        printf( " The value of i is %d\n",i);
    }
    printf( " Value is 30 -  Loop closed ");    // printing the breaking point 

    return 0 ; 
    
}