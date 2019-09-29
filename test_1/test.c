#include <stdio.h>
#include <string.h>

void start()
{
  printf("hehe\n");
}

void print()
{
    printf("hhhehehehe\n");
}

int  main()
{
  start();
  print();
  return 0;
}

#if 0

void *Mymemcpy(void *dest, const void *src, int count)
{
	char *p = (char*)dest;
	while (count--)
	{
		*p = *(char*)src;		//类型强转，char大小一个字节
		p++;
		(char*)src++;
	}
	return dest;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	memcpy(arr1 + 2, arr1, 16);
	Mymemcpy(arr2+2, arr2, 16);		
	return 0;
}

#endif
