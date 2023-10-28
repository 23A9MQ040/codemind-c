#include<stdio.h>
int main()
{
	int a ;
	int n;
	scanf("%d",&n);
	a = n;
	int i,j;
	for(i = 1; i <= a; i++)
	{
		for(j = 1; j <= i; j++){
		
		printf("%c ",j+64);
	}
	printf("
");
	}
	return 0;
	
}