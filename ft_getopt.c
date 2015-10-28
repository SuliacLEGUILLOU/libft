#include "libft.h"

int		ft_getopt(int ac, char **av)
{
	static int		line = 0;
	static char		*opt = NULL;

	while (line < ac)
	{
		if (!opt || *(av[line]) != '-' || !(*opt))
		{
			line++;
			opt = (line < ac) ? av[line] : NULL;
		}
		else if (opt++)
			return (*opt);
	}
	return (-1);
}
