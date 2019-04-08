int a[2][100],n,m,b[200];

void read()
{
	scanf("%d %d\n",&n,&m);
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[0][i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[1][j]);
	}
}

void sort()
{
	int k=0,l,min,temp;
	for(k=0;k<n;k++)//??????
	{
		min=a[0][k];
		for(l=k+1;l<n;l++)
		{
			if(a[0][l]<min)
			{
				temp=min;
				min=a[0][l];
				a[0][k]=min;
				a[0][l]=temp;
			}
		}
	}
	k=0;
	for(k=0;k<m;k++)//??????
	{
		min=a[1][k];
		for(l=k+1;l<m;l++)
		{
			if(a[1][l]<min)
			{
				temp=min;
				min=a[1][l];
				a[1][k]=min;
				a[1][l]=temp;
			}
		}
	}
}

void merge()
{
	int i=0,j=n;
	for(i=0;i<n;i++)
	{
		b[i]=a[0][i];
	}
	for(j=n;j<n+m;j++)
	{
		b[j]=a[1][j-n];
	}
}

void out()
{
	int i=0;
	for(i=0;i<n+m;i++)
	{
		if(i<n+m-1)
			printf("%d ",b[i]);
		else printf("%d",b[i]);
	}
}

void main()
{
	read();
	sort();
	merge();
	out();	
}