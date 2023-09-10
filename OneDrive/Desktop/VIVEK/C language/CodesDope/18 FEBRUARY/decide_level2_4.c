# include<stdio.h>

int main(){
    int salary, y;
    printf("ENTER SALARY :: ");
    scanf("%d", &salary);
    printf("ENTER YEARS OF SERVICE :: ");
    scanf("%d", &y);
    int bonus = 0;
    if (y>5)
    {
        bonus = (5*salary)/100;
        printf("NET BONUS AMOUNT :: %d", bonus);
    }
    else{
        printf("NET BONUS AMOUNT :: %d", bonus);
    }
return 0;
}