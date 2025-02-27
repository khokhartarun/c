// switch case instructions 

# include <stdio.h>

int main() {

    // veriable
    int a ;
    printf( " Enter the value of a :");

    scanf("%d",&a);

    // using switch statement 

    switch (a){

        case 23: 
             printf(" you entered 23\n");
             break;           

        case 24 :
             printf( " you entered 24\n");
             break;
             
        // default statement runs when no value matched     
        default :                                        
            printf(" None of the value is matched");          
    }
    return 0;
}