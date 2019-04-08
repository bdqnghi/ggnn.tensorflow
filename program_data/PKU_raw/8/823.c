int main()
{
	int bubble(int c[],int x);
	int i,m,n;
	int a[100],b[100];
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		scanf("%d ",&a[i-1]);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d ",&b[i-1]);
	}
	printf("\n");
	bubble(a,m);
	printf(" ");
	bubble(b,n);
}

int bubble(int c[],int x)
{
	int t,j,temp;
	for(t=1;t<=x;t++)
	{
		for(j=1;j<=x-t;j++)
		{
			if(c[j-1]>c[j])
			{
				temp=c[j-1];
				c[j-1]=c[j];
				c[j]=temp;
			}
		}
	}
	for(t=1;t<=x;t++)
	{
		printf("%d",c[t-1]);
		if(t!=x)
		printf(" ");
	}
}
