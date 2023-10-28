c#include<stdio.h>
int main()
{
	int a ;
	int n;
	scanf("%d",&n);
	a = n;
	int i,j;
	for(i = a; i >= 1; i--)
	{
		for(j = a; j >= i; j--){
		
		printf("%c ",i+64);
	}
	printf("
");
	}
	return 0;
	
}