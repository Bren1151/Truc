#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temporaire;
	temporaire = 0;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}

int main ()
{
	int a;
	int b;

	a = 100;
	b = 200;
	ft_swap(&a, &b);
	printf("a qui faisait 100 fait maintenant %d\n", a);
	printf("b qui faisait 200 fait maintenant %d\n", b);
}
