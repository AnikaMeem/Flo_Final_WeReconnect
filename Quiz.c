#include <stdio.h>

int main()
{
	
	int i;
	int score = 0;
	int temp_score;
	char answer;

	for (i = 1; i <= 4; i++) {
		switch (i) {
		case 1:
			printf("\n1) What is the first progaram?\n");
			printf("A.Hello world\tB.Hello Human\nC.Hello Progarm\tD.Hello\n");
			scanf(" %c", &answer);

			if (answer == 'A' || answer == 'a') {
				printf("\nCORRECT!\n");
				score++;
			} else {
				printf("\nINCORRECT! CORRECT ANSWER: A\n");
			}

			break;

		case 2:
			printf("\n2) What is considered computer's short term memory?\n");
			printf("A.RAM\tB.ROM\nC.REM\tD.CD-ROM\n");
			scanf(" %c", &answer);
			
			if (answer == 'A' || answer == 'a') {
				printf("\nCORRECT!\n");
				score++;
			} else {
				printf("\nINCORRECT! CORRECT ANSWER: A\n");
			}
			break;

		case 3:
			printf("\n3) The correct declaration of the integer named 'i' is:\n");
			printf("A.int i;\tB.i=int;\nC.integer=i;\tD.int=i;\n");
			scanf(" %c", &answer);
			
			if (answer == 'A' || answer == 'a') {
				printf("\nCORRECT!\n");
				score++;
			} else {
				printf("\nINCORRECT! CORRECT ANSWER: A\n");
			}

			break;

		case 4:
			printf("\n4) Which of the following data types are ideal for numbers?\n");
			printf("A.float\tB.char\nC.int\tD.A & C Both\n");
			scanf(" %c", &answer);
			
			if (answer == 'D' || answer == 'd') {
				printf("\nCORRECT!\n");
				score++;
			} else {
				printf("\nINCORRECT! CORRECT ANSWER: D\n");
			}

			break;
		}
	}

	printf("\nRound 1 Score:%d\n", score);

	if (score >= 3) {
		printf("\nYou have completed Round 1! :) \nDo you want to play Round 2? (Y/N)\n");
		scanf(" %c", &answer);
	}
	else {
		printf("\nYou have Failed!\n");
	}
	
	temp_score = score;
	score = 0;
	
	if (answer == 'Y' || answer == 'y') {

		for (i = 1; i <= 2; i++) {

			switch (i) {

			case 1:
				printf("\n1) Each time that a loop <loops> is known as a(n):\n");
				printf("A.count\t\tB.increment\nC.iteration\tD.none of these\n");
				scanf(" %c", &answer);
				
				if (answer == 'C' || answer == 'c') {
					printf("\nCORRECT!\n");
					score++;
				} else {
					printf("\nINCORRECT! CORRECT ANSWER: C\n");
				}

				break;

			case 2:
				printf("\n2) Each time that a loop <loops> is known as a(n):\n");
				printf("A.count\t\tB.increment\nC.iteration\tD.none of these\n");
				scanf(" %c", &answer);
				
				if (answer == 'C' || answer == 'c') {
					printf("\nCORRECT!\n");
					score++;
				} else {
					printf("\nINCORRECT! CORRECT ANSWER: C\n");
				}

				break;
			}
		}
	}

	printf("Round 2 Score: %d\n", score);
}
