// calculate the income tax paid by the employes according to the slab 

# include <stdio.h>

int main (){

    int income;
    float tax=0 ;   // taking tax==0 
    printf( " enter the income ");
    scanf("%d", &income);

    // conditional statements 
564
    if(income<= 250000){
        tax=0;
    }
    else if(income >250000 && income <= 500000){  // 5% tax 
           tax= 0.05*( income - 250000);      
    }
    else if ( income > 500000 && income <= 100000) { 
        // tax 20%
        tax=0.05*( 500000 - 250000) + 0.2* ( income- 500000);
    }
    else if ( income > 1000000 && income <= 3000000) {
        tax= 0.05*( income - 250000) + 0.2 *( 1000000 - 500000 ) + 0.3 * ( income - 1000000);
    }
    printf( " The total tax you need to pay is %d\n");

    return 0 ;

}