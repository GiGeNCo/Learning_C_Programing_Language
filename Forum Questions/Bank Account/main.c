#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deposit(int accno,double amount);

int main()
{
FILE *bt = fopen("mybank.accdb","r");
int ch,accno;
double amount;

printf("Menu Options\n");
printf("1 - Print All Acounts\n");
printf("2 - Open New Account\n");
printf("3 - Withdraw\n");
printf("4 - Deposit\n");
printf("5 - Close Account\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
break;
case 2:
break;
case 3:
break;
case 4:
printf("Enter acc no: ");
scanf("d",&accno);
printf("Enter amount: ");
scanf("%.2lf",&amount);
bt->deposit(accno,amount);
break;
}
fclose(bt);
return 0;
}

void deposit(int accno, double amount)
{
stringstream sql;
sql<< "UPDATE bank_accout SET balance=balance+" << amount
<< "WHERE acc_no="<<accno;
}