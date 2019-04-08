void main()
{
	char str[10000]={'\0'};
	int n,sum=0,j=0,i;
	int a[10000];
	gets(str);
	n=strlen(str);
	for (i=0;i<=n;i++)
	{
		if (str[i]!=' '&&str[i]!='\0')
			sum=sum+1;
		else
		{
			a[j]=sum;
			j++;
			sum=0;
		}
	}
	for(i=0;i<j-1;i++)
	{
		if (a[i]!=0)
		{
			printf("%d,",a[i]);
		}
	}
	printf("%d",a[j-1]);
}