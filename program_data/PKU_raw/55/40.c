
int main()
{
	int a,b;
	char c[PI];

	scanf("%d %s %d",&a,c,&b);

	int len;
	len=strlen(c);
	int i;
	for (i=0;i<len;i++)
	{
		if (c[i]>='a'&&c[i]<='z')
		{
			c[i]=c[i]-32;
		}
	}


	long int sum=0;
	i=0;
	int tmp;
	int j=len;
	while (i<len)
	{
		if (c[i]>=65&&c[i]<=90)
		{
			tmp=(c[i]-55)*(long int)pow(a,j-1);
		}
		if (c[i]>=48&&c[i]<=57)
		{
			tmp=(c[i]-48)*(long int)pow(a,j-1);
		}
		sum+=tmp;
		j--;
		i++;
	}


	char d[PI];
	
	i=0;
	if (sum==0)
		printf("0");
	while (sum!=0)
	{
		d[i]=sum%b;
		sum=sum/b;
		i++;
	}
	for (j=i-1;j>=0;j--)
	{
		if (d[j]>=0&&d[j]<=9)
		{
			printf("%c",d[j]+48);
		}
		if (d[j]>=10&&d[j]<=35)
		{
			printf("%c",d[j]+55);
		}
	}
	return 0;
}