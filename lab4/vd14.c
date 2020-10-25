#include<stdio.h>
int main()
{
    float com=0, sales_amt;
    char grade;
    printf("Enter the sales amount:");
    scanf("%f", &sales_amt);
    printf("\n Enter the grade:");
    scanf("%c", &grade);
    if(sales_amt > 10000)
        if(grade =='A')
            com=sales_amt *0.01;
        else
            com=sales_amt*0.08;
    else
        com=sales_amt*0.05;
    printf("\nCommission=%f", com);
        
}