//Siddesh Bist
//LO5
//400072076
//Lab 1
//Q1


//For Loop
#include <stdio.h>
int main ()
{
    int sum=0,i;// initialize sum
    for (i=30;i<=1000;i++) 
    {
        if(i%4==0)// finds all the integers between 30 and 1000 that are divisible by 4
        {
            sum=sum+i; //if an integer is divisible by 4 it adds to the sum
        }
    }
    printf("The sum of all the numbers %d",sum);

    return 0;
}

//While Loop
//
//#include <stdio.h>
//int main ()
//{
//    int sum=0, i;
//    i=30; //The code will compute integers starting from 30
//    while (i<=1000) // The stopping condition of the while loop is when i is higher than 1000
//    {
//        if(i%4==0) // If an integer is a multiple of 4 then dividing it by 4 will yield 0
//        {
//            sum=sum+i; // The sum of all the number divisible by 4 gets added
//        }
//        i++; // The integer increases by increments of 1 so all the integers between 30 and 1000 can be considered
//    }
//    printf("The sum of all the numbers %d",sum);
//
//    return 0;
//}
//
//
////Do While Loop 
//
//#include <stdio.h>
//int main ()
//{
//    int sum=0, i;
//    i=30; //i=30 because the range of integers starts at 30
//    do
//    {
//        if(i%4==0) //If a number is a multiple of 4 then performing mod will be 0
//        {
//
//            sum=sum+i; //sum updates and all the numbers that have 4 as a factor sum together
//        }
//        i++; //increases by 1 to check every number between 30 and 1000
//    }
//
//    while (i<=1000);  //As soon as i is greater than 1000 the loop will be terminated
//    printf("The sum of all the numbers %d",sum);
//
//    return 0;
//}
//
