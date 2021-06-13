/*
Answer:The above code will not print anything
Explanation:We are comparing signed int i with a variable of datatype size_t, which is defined as unsigned long int(already in the libar).
The compiler will convert signed int -2 to unsigned long int and result in maximum possible 
unsigned long int value something like 18446744073709551714, hence for loop condition doesn't excute

another eg:Comparison  is taking place. When a signed number is compared with unsigned, signed 
number is promoted to unsigned. In a 16bit system, the comparison is (65536-2)<=2, so its doesn't
*/
#include<stdio.h>

int main()
{
    for(int i=-2;i<=sizeof(i);i++)
    {
        printf("Hello world");
    }
    return 0;
}
