// to find the greater of 4 numbers 

# include<stdio.h>

int main  (){
    int first , second , third , last ;

    // assigning values to the declayered veriables 

    first = 56 ;
    second = 78 ;
    third = 96;
    last= 563;

    // find the number with conditional statements 

    if( first > second && first > third && first > last){
        printf( " the value of first = %d\n is greater ", first);
    }
    // same for the second value / veriable 

    if( second > first && second > third && second > last){
        printf( " the value of second = %d\n is greater ", second);
    }
    // for the 4th veriable 

    if( third > first && third > second && third > last){
        printf( " the value of third = %d\n is greater ", third);
    }    

    // for the last veriable 

    if( last > first && last > second && last > first){
        printf( " the value of last = %d\n is greater ", last) ;
    }    
    return 0 ;

}  