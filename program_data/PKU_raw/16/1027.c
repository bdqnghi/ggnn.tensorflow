void main()
{
	int n=0;
	int n_1=0,i=0;
	int len=0;
	int a[6]={0};
	scanf("%d",&n);
	n_1=n;
	for(;n/10>0;)
	{
		n=n/10;
		len++;
	}
	len++;
	for(i=0;i<len;i++)
	{
		a[i]=n_1%10;
		n_1=n_1/10;
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
}



