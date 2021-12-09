#include "../ft_printf.h"
#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	FILE	*fp;
	int		pf, ft;

	//testing chars
	fp = freopen("results.txt", "w", stdout);
	pf = printf("%c", '\n');
	ft = ft_printf("%c", '\n');
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("this is %cnother %ctring %c%c%c%c%c%c%c%c%c", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	ft = ft_printf("this is %cnother %ctring %c%c%c%c%c%c%c%c%c", 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 13);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 13);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122);
	ft = ft_printf("%c%c%c%c%c%cThis is the standard %c %c test with different chars%c%c%c%c%c%c\n", 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%cThis is the standard %c %c test with different chars%c%c\n", 123, 124, 125, 126, 127);
	ft = ft_printf("%cThis is the standard %c %c test with different chars%c%c\n", 123, 124, 125, 126, 127);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing strings
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", " wow good stuff\n");
	ft = ft_printf("This is the standard test for string%s", " wow good stuff\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s\n", NULL);
	ft = ft_printf("This is the standard test for string%s\n", NULL);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf(" \n");
	ft = ft_printf(" \n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", "\n");
	ft = ft_printf("This is the standard test for string%s", "\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", " wow good stuff\n");
	ft = ft_printf("This is the standard test for string%s", " wow good stuff\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", " wow good stuff\n");
	ft = ft_printf("This is the standard test for string%s", " wow good stuff\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", " wow good stuff\n");
	ft = ft_printf("This is the standard test for string%s", " wow good stuff\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This is the standard test for string%s", " wow good stuff\n");
	ft = ft_printf("This is the standard test for string%s", " wow good stuff\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%s", "This is the standard test for string wow good stuff and let's make this extremely long to see if anything happens, because as you may already know, what can happen will happen.\n");
	ft = ft_printf("%s", "This is the standard test for string wow good stuff and let's make this extremely long to see if anything happens, because as you may already know, what can happen will happen.\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%s%s%s%s", NULL, " test", " second test ", "\n");
	ft = ft_printf("%s%s%s%s", NULL, " test", " second test ", "\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing pointers
	char	*pointer = "lmao";
	fp = freopen("results.txt", "a", stdout);
	pf = printf("Standard pointer %p\n", pointer);
	ft = ft_printf("Standard pointer %p\n", pointer);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("Standard pointer %p\n", (void *)0);
	ft = ft_printf("Standard pointer %p\n", (void *)0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("Standard pointer %p\n", (void *)-123);
	ft = ft_printf("Standard pointer %p\n", (void *)-123);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("Standard pointer %p%p%p %p\n", (void *)-2147483648, pointer, NULL, (void *)2147483647);
	ft = ft_printf("Standard pointer %p%p%p %p\n", (void *)-2147483648, pointer, NULL, (void *)2147483647);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %d
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%d\n", 2147483647);
	ft = ft_printf("%d\n", 2147483647);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%ld\n", -2147483648);
	ft = ft_printf("%d\n", -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%d\n", 0);
	ft = ft_printf("%d\n", 0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%d %d %d %d %ld\n", 2147483647, 0, 123, -543, -2147483648);
	ft = ft_printf("%d %d %d %d %d\n", 2147483647, 0, 123, -543, -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %i
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%i\n", 2147483647);
	ft = ft_printf("%i\n", 2147483647);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%li\n", -2147483648);
	ft = ft_printf("%i\n", -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%i\n", 0);
	ft = ft_printf("%i\n", 0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%i %i %i %i %li\n", 2147483647, 0, 123, -543, -2147483648);
	ft = ft_printf("%i %i %i %i %i\n", 2147483647, 0, 123, -543, -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %x
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%x\n", 2147483647);
	ft = ft_printf("%x\n", 2147483647);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%lx\n", -2147483648);
	ft = ft_printf("%x\n", -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%x\n", 0);
	ft = ft_printf("%x\n", 0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%x %x %x %x %lx\n", 2147483647, 0, 123, -543, -2147483648);
	ft = ft_printf("%x %x %x %x %x\n", 2147483647, 0, 123, -543, -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %X
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%X\n", 2147483647);
	ft = ft_printf("%X\n", 2147483647);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%lX\n", -2147483648);
	ft = ft_printf("%X\n", -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%X\n", 0);
	ft = ft_printf("%X\n", 0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%X %X %X %X %lX\n", 2147483647, 0, 123, -543, -2147483648);
	ft = ft_printf("%X %X %X %X %X\n", 2147483647, 0, 123, -543, -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %u
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%ld\n", 4294967295);
	ft = ft_printf("%u\n", 4294967295);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%ld\n", 2147483648);
	ft = ft_printf("%u\n", 2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%u\n", 0);
	ft = ft_printf("%u\n", 0);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%ld %u %u %u %ld\n", 4294967295, 0, 123, 543, 2147483648);
	ft = ft_printf("%u %u %u %u %u\n", 4294967295, 0, 123, 543, 2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing %%
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%%\n");
	ft = ft_printf("%%\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%%d\n");
	ft = ft_printf("%%d\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("lmaolmaolmao%%lmaolmaolmao\n");
	ft = ft_printf("lmaolmaolmao%%lmaolmaolmao\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n", pf, ft);
	fclose(fp);
	fp = freopen("results.txt", "a", stdout);
	pf = printf("%%%%%%%%%%%%%%%%\n");
	ft = ft_printf("%%%%%%%%%%%%%%%%\n");
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------\n", pf, ft);
	fclose(fp);

	//testing mix
	fp = freopen("results.txt", "a", stdout);
	pf = printf("This %c%x %X is %s the %p %ld final %d %% test %li\n", '-', 666, 420, "Blaze", pointer, 4294967295, 0, -2147483648);
	ft = ft_printf("This %c%x %X is %s the %p %u final %d %% test %i\n", '-', 666, 420, "Blaze", pointer, 4294967295, 0, -2147483648);
	printf("Return values: printf = %d, ft_printf = %d\n----------\n----------\n----------", pf, ft);
	fclose(fp);
	return (0);
}