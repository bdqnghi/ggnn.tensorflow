int a[100],b[100],c[100],m,n;
void input()
{
	int i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
}
void az()
{
	int i,j,t;
	for(j=0;j<m;j++)
	{
		for(i=0;i<m-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
}
void jch()
{
	int j;
	for(j=0;j<m;j++)
	{
		c[j]=a[j];
	}
	for(j=m;j<m+n;j++)
	{
		c[j]=b[j-m];
	}
}
void output()
{
	int i;
	for(i=0;i<m+n-1;i++)
	{
		printf("%d ",c[i]);
	}
	printf("%d",c[m+n-1]);
}
void main()
{
	input();
	az();
	jch();
	output();
}