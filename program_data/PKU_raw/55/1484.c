int main()
{
	int a,b,i,e=0,num[100];
	long n=0;
	char sz[100];
	scanf("%d%s%d",&a,sz,&b);
	for(i=0;i<strlen(sz);i++)
	{
		if(sz[i]>='0'&&sz[i]<='9')
		{
			num[i]=sz[i]-'0';
		}
		if(sz[i]>='a'&&sz[i]<='z')
		{
			num[i]=sz[i]-'a'+10;
		}
		if(sz[i]>='A'&&sz[i]<='Z')
		{
			num[i]=sz[i]-'A'+10;
		}
	}
	for(i=0;i<strlen(sz);i++)
	{
		n+=num[i]*pow(a,strlen(sz)-1-i);
	}
	while(n>=b)
	{
		num[e]=n%b;
		n=n/b;
		e++;
	}
	num[e]=n%b;
	for(i=0;i<e+1;i++)
	{
		if(num[i]>=0&&num[i]<=9)
		{
			sz[i]=num[i]+'0';
		}
		if(num[i]>9)
		{
			sz[i]=num[i]+'A'-10;
		}
	}
	for(i=e;i>=0;i--)
	{
		printf("%c",sz[i]);
	}
	return 0;
}
