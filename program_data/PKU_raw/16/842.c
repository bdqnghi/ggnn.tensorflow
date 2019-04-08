int main()
{
	char a[10]={0};
	int b,i,n;
	scanf("%d",&b);
	i=0;
	do
	{
		a[i]=b%10;
		b=b/10;
		i++;
	}while(b>0);
	n=i;
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}