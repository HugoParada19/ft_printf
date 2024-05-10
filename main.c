#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int total;

	ft_printf("Teste\n");
	ft_printf("Teste com um char: \t%c\n", 'c');
	total = ft_printf("Teste com uma string: \t%s\n", "Ola, tudo bem");
	ft_printf("Teste com uma integer: \t%d\n", total);
	ft_printf("Teste com unsigneds: \t%u\n", 123);
}
