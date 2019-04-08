int main()
{
	char a[1000];
	int i,m,n,j,i1,j1,i2,j2,s0,s=0,k=0;
	int count[200]={0};
	char x;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		x=a[i];
		for(j=65;j<91;j++)
		{
			if(x==j)
			{
				count[j]++;
			}
		}
		for(j=97;j<123;j++)
		{
			if(x==j)
			{
				count[j]++;
			}
		}
	}
	for(i=65;i<123;i++)
	{
		if(count[i]!=0)
		{
			x=i;
			printf("%c=%d\n",x,count[i]);
			k=1;
		}
	}
	if(k==0)
	{
		printf("No");
	}
	return 0;
}
