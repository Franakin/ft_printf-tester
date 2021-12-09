#include "../ft_printf.h"
#include "../libft/libft.h"
#include "get_next_line/get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define NORMAL "\x1B[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"

int	compare_ret(char *ret_values)
{
	int	i = 24;
	int	pf = ft_atoi(&ret_values[i]);
	while (ft_isdigit(ret_values[i]))
		i++;
	while (!ft_isdigit(ret_values[i]))
		i++;
	int	ft = ft_atoi(&ret_values[i]);
	if (pf == ft)
		return (1);
	else
		return (0);
}

int	compare_str(char *str1, char *str2)
{
	int	i;

	i = 0;
	if (!str1 || !str2)
		return (0);
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if (str1[i] != str2[i])
		return (0);
	return (1);
}

void	check_loop(int fd)
{
	char	*str1 = get_next_line(fd);
	char	*str2 = get_next_line(fd);
	char	delimiter[11] = "----------\n";
	char	*ret_val;
	int		i = 1;
	int		fd2;

	while (ft_strncmp(str1, delimiter, 11) != 0 && ft_strncmp(str2, delimiter, 11) != 0)
	{
		ret_val = get_next_line(fd);
		if (compare_str(str1, str2) && compare_ret(ret_val))
			printf("%s %d:OK%s", GREEN, i, NORMAL);
		else
		{
			printf("%s %d:KO%s", RED, i, NORMAL);
			fd2 = open("error_log.txt", O_WRONLY);
			write(fd2, str1, ft_strlen(str1));
			write(fd2, str2, ft_strlen(str2));
			write(fd2, ret_val, ft_strlen(ret_val));
			close(fd2);
		}
		i++;
		(void)get_next_line(fd);
		free(str1);
		free(str2);
		free(ret_val);
		str1 = get_next_line(fd);
		str2 = get_next_line(fd);
	}
	free(str1);
	free(str2);
}

int	main(void)
{
	int		fd;

	fd = open("results.txt", O_RDONLY);
	printf("Mandatory tests:\n%%c test:");
	check_loop(fd);
	printf("\n%%s test:");
	check_loop(fd);
	printf("\n%%p test:");
	check_loop(fd);
	printf("\n%%d test:");
	check_loop(fd);
	printf("\n%%i test:");
	check_loop(fd);
	printf("\n%%x test:");
	check_loop(fd);
	printf("\n%%X test:");
	check_loop(fd);
	printf("\n%%u test:");
	check_loop(fd);
	printf("\n%%%% test:");
	check_loop(fd);
	printf("\nMix test:");
	check_loop(fd);
	close(fd);
	return (0);
}
