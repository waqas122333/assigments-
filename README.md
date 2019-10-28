# assigments-
Name muhammad waqas naseer computer science 2019-23



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
result=time/3600000;
}
else if(choice==2)
{
result=time*3600000;
}
printf("\n\n\tresult=%f",result);
return 0;
}
