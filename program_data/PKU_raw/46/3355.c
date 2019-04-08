int sum;
void print(int a[][100],int m1,int n1,int m2,int n2,int k)
{
	int i;
	for(i=n1;i<n2&&k!=sum;i++)
	{
		printf("%d\n",a[m1][i]);
		k+=1;
	}
	for(i=m1+1;i<m2&&k!=sum;i++)
	{
		printf("%d\n",a[i][n2-1]);
		k+=1;
	}
	for(i=n2-2;i>n1&&k!=sum;i--)
	{
		printf("%d\n",a[m2-1][i]);
		k+=1;
	}
	for(i=m2-1;i>m1&&k!=sum;i--)
	{
		printf("%d\n",a[i][n1]);
		k+=1;
	}
	if(n2-n1>2&&m2-m1>2)
		print(a,m1+1,n1+1,m2-1,n2-1,k);
}
void main()
{
	int i,j,m,n,a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	sum=m*n;
	print(a,0,0,m,n,0);
}