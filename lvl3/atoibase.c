#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nbr1;
	int nbr2;

	if ((nbr1 = 10) > 0 && (nbr2 = 100) > 0)//verife que le sdeus deux nbr sont bien positif 
	{
		while (nbr1 != nbr2)//puis tant que les 2 ne sont pas identique  on retire l'un a lautre en fonction de celuie qui est le plus grand
		{
			if (nbr1 > nbr2)
				nbr1 -= nbr2;
			else
				nbr2 -= nbr1;
		}
		printf("%d", nbr1);// si egalite on a lae pus grnad denomiateru commun
	}
	printf("\n");
	return (0);
}
