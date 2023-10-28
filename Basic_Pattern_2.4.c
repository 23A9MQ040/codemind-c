#include<stdio.h>
int main()
{
	int a ;
	int n;
	scanf("%d",&n);
	a = n;
	int i,j;
	for(i = a; i >= 1; i--)
	{
		for(j = i; j <= a; j++){
		
		printf("%d ",j);
	}
	printf("
");
	}
	return 0;
	
}