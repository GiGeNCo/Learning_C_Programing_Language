#include <stdio.h>

int main() {
    printf("Enter Withdraw Amount\n");

    int amount;
    scanf("%d",&amount);
    int bankNote = 200;


    if(amount / bankNote != 0)
    {

        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 100;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 50;
        if(amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 20;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 10;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 5;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 2;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);
        amount = amount % bankNote;
        bankNote = 1;
        if (amount / bankNote != 0) printf("%d Note(s) of %d\n", amount / bankNote, bankNote);

    }



    return 0;
}