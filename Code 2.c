#include<stdio.h>
int main(void)
{
char choice;
printf("Time Table\n");
printf("1.Monday\n");
printf("2.Tuesday\n");
printf("3.Wednesday\n");
printf("4.Thursday\n"); 
printf("5.Friday\n");
printf("6.saturday\n");
printf("7.sunday\n");
printf("Enter choice\n");

scanf("%c", &choice);

if (choice=='1')
{

printf("ICT\n");
}

else if (choice=='2')
{
 printf(" fundamental programming");

}
else if (choice=='3')
{
printf("Applied Physics");

}

else if (choice=='4')

{
printf(" English");
}

else if (choice=='5')
{
printf("Calculus");
}
    
    else if (choice=='6')

{
printf("off");
}

else if (choice=='7')
{
 printf("off");
        }
    
    return 0;
}