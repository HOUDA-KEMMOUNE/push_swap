// #include "push_swap.h"

// /*-------------------check_len----------------*/
// static int	check_zero_one(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	// if (str[i] == '-' || str[i] == '+')
// 	// 	i++;
// 	while (str[i] == '0')
// 		i++;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		if (str[i] != '0' && str[i] != '1')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// static int	count_after_zero(const char *str)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] == '0')
// 		i++;
// 	if (str[i] == '\0')
// 		return (0);
// 	while (str[i])
// 	{
// 		i++;
// 		count++;
// 	}
// 	return (count);
// }

// void	check_len(char **av, int ac)
// {
// 	int			zero_one_res;
// 	int			i;
// 	char		*str;
// 	int			count;
	
// 	if (ac == 1)
// 		exit(1);
// 	i = 1;
// 	ac--;
// 	while (i < ac)
// 	{
// 		str = av[i];
// 		count = count_after_zero(str);
// 		zero_one_res = check_zero_one(str);
// 		if ((count >= 11) && (zero_one_res == 1))
// 			print_error();
// 		i++;
// 	}
// }
// /*-------------------end--------------------*/