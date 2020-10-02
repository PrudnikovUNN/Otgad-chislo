#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>

 
using namespace std; 

int main()
{
	int zagad, otgad, middle, low, high, slu, i;
	char znak;

	i = 0;
	slu = 0;
	otgad = 0;
	zagad = 0;

	low = 1;
	high = 1000;
	middle = (low + high) / 2; 

	printf("Vvedite regim(1 or 2):\n");
	scanf("%d", &slu);

	if (slu == 1)
	{
		srand(time(NULL));
		zagad = (rand() % 999) + 1;
		while (zagad != otgad)
		{
			scanf("%d", &otgad);

			if (otgad > zagad)
				printf("Perebor");
			else if (otgad < zagad)
				printf("Nedobor");
			i++;
		}
		printf("Otgadal ");
		printf("Obxodov algoritma: %d", i);
	}
	else
	{
		printf("Vvedi chislo:");
		scanf("%d",&zagad);

		while (zagad != middle)
		{
			printf("%d?\n", middle);
			getchar();
			scanf("%c", &znak);

			switch (znak)
			{
			case '>':
				low = middle + 1;
				middle = (low + high) / 2;
				i++;
				break;
			case '<':
				high = middle - 1;
				middle = (high + low) / 2;
				i++;
				break;
			}
		}
		printf("Zagadannoe chislo = %d",middle);
		printf("Obxodov algoritma %d",i );
	}

	system("pause");
	return 0;
}
