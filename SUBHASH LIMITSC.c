#include<stdio.h>
#include<limits.h>
int main ()
{
	printf("short int:\n signed:%hd to %hd\n", SHRT_MIN,SHRT_MAX);
	printf("short int:\n unsigned:%hu to %hu\n", 0 ,USHRT_MAX);
     printf("int:\n signed :%d to %d\n", INT_MIN,INT_MAX);
     printf("int:\n unsigned:%u to %u\n", 0,UINT_MAX);
     printf("long int:\n signed:%li to %li\n", LONG_MIN,LONG_MAX);
     printf("long int:\n unsigned:%lu to %lu\n", 0,ULONG_MAX);
     printf("long long int:\n signed:%lli to %lli\n", LONG_LONG_MIN,LONG_LONG_MAX);
     printf("long long int:\n unsigned:%llu to %llu\n", 0,LONG_LONG_MAX);
}






