//Math Game for children..

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
	int sonuc;
	int cevap;
	int sayi1;
	int sayi2;
	int islem;
	int score = 0;
	for (i = 0; i < 10; i++) {
		srand(time(0));
		sayi1 = rand() % 10;
		sayi2 = rand() % 10;
		islem = (rand() % 4) + 1;


		if (islem == 1)
		{
			printf("%d + %d =", sayi1, sayi2);
			scanf_s("%d", &cevap);
			sonuc = sayi1 + sayi2;
			if (cevap == sonuc)
			{
				printf("True Answer\n");
				score++;
			}
			else
				printf("Wrong Answer\n");

		}
		else if (islem == 2)
		{
			if (sayi1 > sayi2)
			{
				printf("%d - %d =", sayi1, sayi2);

				sonuc = sayi1 - sayi2;
				scanf_s("%d", &cevap);
				if (cevap == sonuc)
				{
					printf("True Answer\n");
					score++;
				}
				else
					printf("Wrong Answer\n");
			}
			else
			{
				printf("%d - %d =", sayi2, sayi1);
				sonuc = sayi2 - sayi1;
				scanf_s("%d", &cevap);
				if (cevap == sonuc)
				{
					printf("True Answer\n");
					score++;
				}
				else
					printf("Wrong Answer\n");
			}


		}
		else if (islem == 3)
		{
			printf("%d * %d =", sayi1, sayi2);
			scanf_s("%d", &cevap);
			sonuc = sayi1 * sayi2;
			if (cevap == sonuc)
			{
				printf("True Answer\n");
				score++;
			}
			else
				printf("Wrong Answer\n");

		}
		else
		{
			if (sayi1 > sayi2)
			{
				if (sayi2 != 0)
				{
					printf("%d / %d =", sayi1, sayi2);
					sonuc = sayi1 / sayi2;
				}
				else
					sonuc = 0;

			}
			else
			{
				if (sayi1 != 0)
				{
					printf("%d / %d =", sayi2, sayi1);
					sonuc = sayi2 / sayi1;
				}
				else
					sonuc = 0;
			}
			scanf_s("%d", &cevap);

			if (cevap == sonuc)
			{
				printf("True Answer\n");
				score++;
			}
			else
				printf("Wrong Answer\n");

		}
		printf("Score= %d\n\n", score);
		sonuc = 0;
	}

		printf("GAME OVER YOUR SCORE IS = %d\n", score);

		if (score>=7) 
		{
			printf("Congratulations you won! ");
		}
		else 
		{
			printf("Unfortunately you lost, try again!");
		}
}