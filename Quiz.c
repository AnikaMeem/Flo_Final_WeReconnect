#include<stdio.h>

int main()
{
    int x, i, score=0, temp_score;
    char a;

    for (i=1; i<=4; i++)
    {
        switch (i)
    {
case 1:
        printf("\n1)What is the first progaram?\n");
        printf("A.Hello world\tB.Hello Human\nC.Hello Progarm\tD.Hello\n");
        scanf(" %c", &a);
        if (a=='A'  || a=='a')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:A");

        }
        break;



case 2:

        printf("\n2)What is considered computer's short term memory?\n");
                printf("A.RAM\tB.ROM\nC.REM\tD.CD-ROM\n");
                scanf(" %c", &a);
             if (a=='A'  || a=='a')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:A");

        }
        break;


case 3:

        printf("\n3)The correct declaration of the integer named 'i' is:\n");
                printf("A.int i;\tB.i=int;\nC.integer=i;\tD.int=i;\n");
                scanf(" %c", &a);
             if (a=='A'  || a=='a')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:A");

        }
        break;



case 4:

        printf("\n4)Which of the following data types are ideal for numbers?\n");
                printf("A.float\tB.char\nC.int\tD.A & C Both\n");
                scanf(" %c", &a);
             if (a=='D'  || a=='d')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:D");

        }
        break;
    }

    }


printf("\nRound 1 Score:%d\n", score);



if (score>=3)
   {
    printf("\nYou have completed Round 1! :) \nDo you want to play Round 2? (Y/N)\n");
   scanf(" %c", &a);
   }
   else{
   printf("\nYou have Failed!\n");
   }
temp_score=score;
score=0;
   if (a=='Y' || a=='y')
   {

    for (i=1; i<=2; i++)
    {

        switch(i)
        {

case 1:
        printf("\n1)Each time that a loop <loops> is known as a(n):\n");
        printf("A.count\tB.increment\nC.iteration\tD.none of these\n");
        scanf(" %c", &a);
        if (a=='C'  || a=='c')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:C");

        }
        break;


case 2:
        printf("\n1)Each time that a loop <loops> is known as a(n):\n");
        printf("A.count\tB.increment\nC.iteration\tD.none of these\n");
        scanf(" %c", &a);
        if (a=='C'  || a=='c')
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nINCORRECT! CORRECT ANSWER:C");

        }
        break;


        }

    }
   }

printf("Round 2 Score: %d", score);
}
