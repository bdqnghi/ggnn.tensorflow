void top(int i,int j,int m,int n,int a[20][20])
{if(i==0&&j!=0)
	{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
	printf("%d %d\n",i,j);}
	else if(j==0&&i!=0)
	{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
	printf("%d %d\n",i,j);}
	else if(i==0&&j==0)
	{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
	printf("%d %d\n",i,j);}
	else if(i==m-1&&j==n-1)
	{if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
	printf("%d %d\n",i,j);}
	else if(i==m-1&&j!=n-1)
	{if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
	printf("%d %d\n",i,j);}
	else if(i!=m-1&&j==n-1)
	{if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
	printf("%d %d\n",i,j);}
	else{
		if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
	printf("%d %d\n",i,j);}
}


void main()
{
	int m,n,i,j,a[20][20]={0};
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);}
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	{top(i,j,m,n,a);
	}
	}
}
	
	