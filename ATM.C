#include<stdio.h>
#include<conio.h>
long amount=1000,deposit,withdraw;
int choice,pin,k;
char transaction = 'Y';

void main()
{
clrscr();
while (pin != 1111)
{
printf("ENTER YOUR SECRET PIN NUMBER");
scanf("%d",&pin);
if(pin != 1111)

printf(" PLEASE ENTER VALID PASSWORD\n");
}

do
{
printf("HELLO,\n");
printf("************ WELCOME TO ATM SERVICE ***********\n");
printf("1. Check balance\n");
printf("2. Withdraw cash\n");
printf("3. Deposit cash\n");
printf("4. Quit\n");
printf("***********************************************\n\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("\n YOUR BALANCE IS Rs%lu",amount);
break;

case 2:
printf("ENTER THE AMOUNT TO WITHDRAW");
scanf("%lu",&withdraw);
if(withdraw % 100 != 0)
{
printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLE OF 100");
}
else if ( withdraw > (amount -500))
{
printf("\nINSUFFICIENT BLANCE");
}
else
{
amount = amount - withdraw;
printf("\n\nPLEASE COLLECT CASH");
printf("\n YOUR CURRENT BALANCE IS Rs %lu",amount);
}
break;

case 3:
printf("\n ENTER THE AMOUNT TO DEPOSIT ");
scanf("%lu",&deposit);
amount = amount + deposit;
printf("\nYOUR CURRENT BALANCE IS Rs%lu",amount);
break;

case 4:
printf("\nTHANK YOU FOR USING ATM");
break;
default:
printf("\n INVALID CHOICE");
}
printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(Y/N):");
fflush(stdin);
scanf("%c",&transaction);
if(transaction == 'n' || transaction == 'N')
k=1;
}
while(!k);
printf("\n\n THANKS FOR USING OUR ATM SERVICE");
getch();
}
