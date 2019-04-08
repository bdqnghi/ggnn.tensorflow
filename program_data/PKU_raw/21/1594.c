float cc(int x,float y)
{
	if (x>y)
		return(x-y);
	else return(y-x);
}
void main()
{
	int n,i,p=0,j;
	float sum=0,t=0;
	int a[301],b[301];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum=sum/n;
	for (i=1;i<=n;i++)
		if (cc(a[i],sum)>t)
			t=cc(a[i],sum);
	for (i=1;i<=n;i++)
	{
		if (cc(a[i],sum)==t)
		{
			p++;
			b[p]=a[i];
		}
	}
	for (i=1;i<p;i++)
	{
		for (j=1;j<=p-i;j++)
		{
			if (b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	if (p==1)
		printf("%d",b[1]);
	else
	{
		printf("%d",b[1]);
		for (i=2;i<=p;i++)
			printf(",%d",b[i]);
	}
}