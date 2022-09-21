#include <stdio.h>
void	ft_ultimate_div_mod(int *a,	int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
}

int main()
{
	int q;
	int w;

	q = 10;
	w = 3;

	ft_ultimate_div_mod(&q, &w);
	printf("%d, %d\n", q, w);
}
	 
