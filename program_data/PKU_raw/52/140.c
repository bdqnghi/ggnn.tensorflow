int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	int *pint;
	pint=(int*)malloc(sizeof(int)*a);
	for(i=0;i<a;i++)
	{
		scanf("%d",pint+i);
	}
	for(i=a-b;i<a;i++)
	{
		printf("%d ",*(pint+i));
	}
	for(i=0;i<a-b;i++)
	{
		printf("%d",*(pint+i));
		if(i!=a-b-1)
			printf(" ");
	}
	return 0;
}
