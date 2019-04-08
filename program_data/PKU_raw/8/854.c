void bubble(int a[],int l)
{
	int i,j,temp;
	for(j=1;j<l;j++)
	{
		for(i=0;i<l-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}
int main()
{
	int m,n,i,j,a[10000],b[10000];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	bubble(a,m);
	bubble(b,n);
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d",b[j]);
		if(j<n-1)
			printf(" ");
	}

	return 0;
}
