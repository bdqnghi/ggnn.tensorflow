
int main ()
{
	int factor(int n,int x);
	int n;
	int i,m;
	int a[100];

	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		a[i]=factor(n,2);
	}
	for(i=0;i<m;i++)
		printf("%d\n",a[i]);
	return 0;
}

int factor(int n,int x)
{
	int i,f=0;

	if(n==1)
        f=1;
	else
		for(i=x;i<=n;i++)
			if(n%i==0)
				f+=factor(n/i,i);
	return f;
}