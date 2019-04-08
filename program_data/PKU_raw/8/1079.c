void rank(int n,int c)
{
	int num[10],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			int a;
			if(num[j]>num[j+1])
			{
				a=num[j];
				num[j]=num[j+1];
				num[j+1]=a;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
		if(i!=n-1)
		{
			printf(" ");
		}
	}
	if(c!=2)
	{
		printf(" ");
	}
}
void count()
{
	int b[2],i;
	scanf("%d %d",&b[0],&b[1]);
	for(i=1;i<=2;i++)
	{
		rank(b[i-1],i);
	}
}
int main()
{
	void rank(int n,int c);
	void count();
	count();
	return 0;
}



