# assigments-
Name muhammad waqas naseer computer science 2019-23

*1*

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


*2*


#include<stdio.h>

int main()
{
 float time,result;
int choice;
printf("\tenter time\t");
scanf("%f",&time);
printf("\n1=Hours to milliseconds");
printf("\n2=milliseconds to hours");
printf("\n\tenter choice\t");
scanf("%d",&choice);
if(choice==1)
{
result=time*3600000;
}
else if(choice==2)
{
result=time/3600000;
}
printf("\n\n\tresult=%f",result);
return 0;
}

Psude code 

1-Display a message enter "time"
2-take input from user 
3-Display available choices 
4-take input from user
5-perform conversation 
6-if (choice==1) then 
7-Result = time*3600000
8-else if (choice==2) then 
9- result= time /3600000
10-Display result 
