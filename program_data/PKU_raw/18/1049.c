int main()
{
	int change(int a[100][100],int);
	int n,a[100][100],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&a[j][k]);
		printf("%d\n",change(a,n));
	}
}
int change(int a[100][100],int n)
{
	int i,j,s,b[100][100],f;
	for(i=0;i<n;i++)
	{
		s=a[i][0];
		for(j=0;j<n;j++)
			s=(s>a[i][j])?a[i][j]:s;
		for(j=0;j<n;j++)
			a[i][j]=a[i][j]-s;
	}
	for(i=0;i<n;i++)
	{
		s=a[0][i];
		for(j=0;j<n;j++)
			s=(s>a[j][i])?a[j][i]:s;
		for(j=0;j<n;j++)
			a[j][i]=a[j][i]-s;
	}
	f=a[1][1];
	if(n>2)
	{
	b[0][0]=a[0][0];
	for(i=2;i<n;i++)
	{
		b[0][i-1]=a[0][i];
		b[i-1][0]=a[i][0];
	}
	for(i=2;i<n;i++)
		for(j=2;j<n;j++)
			b[i-1][j-1]=a[i][j];
	f=f+change(b,n-1);
	}
	return f;
}




		

