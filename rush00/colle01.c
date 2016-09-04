/*************************************\
auteur yhaddar@student.42.fr
date 04 septembre 2016 04:30 mod: 11:47
fichier colle01.c
\*************************************/

#include <unistd.h>

/* variables globales pour rendre le code
modifiable rapidement en colle0X.c
norme.fr.pdf
• Toute utilisation de variable globale doit être justifiée.*/


/* variable globale ou pas les mecs ?

#define CHAR1 '/'
#define CHAR2 '*'
#define CHAR3 '\\'

Saut de ligne \n dans mid a ajouter  */

int	top(int x)
{
	if (x > 1)
	{
		ft_putchar('/');
		while (x > 2)
			{
				ft_putchar('*');
				x --;
			}
		ft_putchar('\\');
	}
	else
		return (0);
}

int 	mid(int x, int y)
{
	while (y > 2 && x > 2)
	{
		ft_putchar('\n');
		ft_putchar('*');
		while (x > 2)
			{
				ft_putchar(' ');
				x --;
			}
		ft_putchar('*');
		y --;
	
	}
	return (0);
}

int	bot(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('\\');
		while (x > 2)
			{
				ft_putchar('/');
				x --;
			}
		ft_putchar('\\');
	}
	else
		return (0);
}


int	ft_generate(int x, int y)
{
	char *error;

	x = 4;
	y = 8;
	/*error = "x ou y < 1";*/
	if (x >= 1 && y >= 1)
	{
			
		if (x > 1 && y > 1)
		{	
			mid(x, y);
			bot(x, y);
		}
		ft_putchar('/');
	}	
	else
	{
		/* ft_putchar(error);*/
		return (0);
	}
}
