#include <stdio.h>

int main()
{
	char Cons;
	int ValA;
	short ValB1;
	double ValB2;
	printf("Exercice 6 : Brêchet Thomas\n");
	printf("Test A ou B, Q pour quitter\n");
	scanf("%c", &Cons);
	if (Cons == 'Q' || Cons == 'q')
	{
		printf("Vous avez choisi de quitter\n");
		return 0;
	}
	else
		if (Cons == 'A' || Cons == 'a')
		{
			printf("entrez un nombre entre 1 et 9\n");
			scanf("%d", &ValA);
			if (ValA > 9)
			{
				printf("TestA ValA limitée a 9!\n");
				ValA = 9;
			}
			else if (ValA <1)
			{
				printf("TestA ValA forcée a 1\n");
				ValA = 1;
			}
			else
			{
				for (int i = 1; i <= ValA; i++)
				{
					printf("*");
				}
			}
		}
	else if (Cons == 'B' || Cons == 'b')
		{
			printf("entrez un nombre entre 1 et 9\n");
			scanf("%d", &ValB1);
			if (ValB1 < 9 );
			{
				printf("TestB ValB limitée a 9!\n");
				ValB1 = 9;
			}


		}
}
