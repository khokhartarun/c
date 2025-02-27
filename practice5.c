// write a program to find the grading of a student 

#include <stdio.h>

int main (){

    int marks ;

    printf(" Enter the marks of the student ");
    scanf("%d",&marks );

    // conditions apply 

     if ( marks > 90 ){
        printf( " The grade is A ");
     }

      else if (marks > 80 && marks <91 ) { 
        printf( " the grade is B") ;
    }    
    else if( marks > 70 && marks < 81 ){
        printf( " The grade is c ");

    }
    else if( marks > 60 && marks < 71 ){
        printf( " The grade is D ");
    }

    else if( marks > 50 && marks < 61 ){
        printf( " The grade is E "); 
    }
    return 0;

}