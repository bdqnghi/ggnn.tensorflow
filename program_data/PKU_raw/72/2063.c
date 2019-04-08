int read();
void tj();
void print();
int a[20][20],b[20][20],m,n;
int main()
{
	read();
	tj();
	print();
	return 0;
}
int read()
{
    int i,j;
	scanf ("%d%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=0;
		}
		return 0;
}
void tj()
{
	int i,j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
		     if (i==0)
			 {if (j==0&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]) b[i][j]=1;
			    else if (a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]) b[i][j]=1;
			 }
			 if (j==0) 
			 {if (i==0&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]) b[i][j]=1;
			    else if (a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]) b[i][j]=1;
			 }
			 if (i==m-1)
		    	{if (j==n-1&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]) b[i][j]=1;
				else if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]) b[i][j]=1;
			 }
			 if (j==n-1)
			 {if (i==m-1&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]) b[i][j]=1;
				else if (a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]) b[i][j]=1;
			 }
             if (i!=0&&j!=0&&i!=m-1&&j!=n-1&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
				 b[i][j]=1;
		}
		return;
}
void print()
{
	int i,j;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
			{if (b[i][j]==1)
			 printf("%d %d\n",i,j);
			}
			return;
}