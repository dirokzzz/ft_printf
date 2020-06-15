#include <stdio.h>
#include "includes/ft_printf.h"

int main()
{
     ft_printf("\n");
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%ld\n", 2147483647);
  ft_printf("%lld\n", 9223372036854775807);
  ft_printf("%x\n", 505);
  ft_printf("%X\n", 505);
  ft_printf("%p\n", &ft_printf);
  ft_printf("%20.15d\n", 54321);
  ft_printf("%-10d\n", 3);
  ft_printf("% d\n", 3);
  ft_printf("%+d\n", 3);
  ft_printf("%010d\n", 1);
  ft_printf("%hhd\n", 0);
  ft_printf("%jd\n", 9223372036854775807);
  ft_printf("%zd\n", 4294967295);
  ft_printf("%\n");
  ft_printf("%U\n", 4294967295);
  ft_printf("%u\n", 4294967295);
  ft_printf("%o\n", 40);
  ft_printf("%%#08x\n", 42);
  ft_printf("%x\n", 1000);
  ft_printf("%#X\n", 1000);
  ft_printf("%s\n", NULL);
  ft_printf("%S\n", L"ݗݜशব");
  ft_printf("%s%s\n", "test", "test");
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("%C\n", 15000);
  
 //BONUS TESTS//
 //1. --$--
  ft_printf("ft_printf=--$--=%4$o %2$u %1$i %5$c %3$s\n", 1, 222, "string", 42, 0);
  printf("   printf=--$--=%4$o %2$u %1$i %5$c %3$s\n", 1, 222, "string", 42, 0);
//2. --time-- %)
  ft_printf("time = %k\n", 20200425);
//3. --star--
  ft_printf("ft_printf=-stars-=%*.*i\n", 5, 3, 10);
  printf("   printf=-stars-=%*.*i\n", 5, 3, 10);
//4. ---z&j--- 
  ft_printf("ft_printf== z = %zu, j = %ju\n", SIZE_MAX, INTMAX_MAX);
  printf("   printf== z = %zu, j = %ju\n", SIZE_MAX, INTMAX_MAX);
//5. ---%b---
  ft_printf("ft_printf== b = %b\n", 55);

   
}