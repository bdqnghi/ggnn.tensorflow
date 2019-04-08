
int main()
{
	int n;
	char s[510];
	scanf("%d",&n);
	scanf("%s",s);
	int i,j,k;
	k=0;
	char a[500][5];
	int count[500];
	for(i=0;i<500;i++)
		count[i]=1;
	int x;
	int max=0;
	for(i=0;s[i+n-1]!=0;i++)
	{
		for(j=0;j<n;j++)
		{
			a[k][j]=s[i+j];
		}
		a[k][j]=0;
		k++;
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			x=strcmp(a[i],a[j]);
			if(x==0)
				count[i]++;
		}
		if(count[i]>=max)
			max=count[i];
	}
	if(max!=1)
	{
		printf("%d\n",max);
		for(i=0;i<k;i++)
		{
			if(count[i]==max)
				printf("%s\n",a[i]);
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}

