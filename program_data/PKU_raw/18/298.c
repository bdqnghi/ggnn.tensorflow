int cal(int a[100][101],int n)
{	
	int i,j,k,min,t=0,p,b[100][101]={0};
	for(i=0;i<n;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<min)
				min=a[i][j];
		}
		for(j=0;j<n;j++)
		{
			a[i][j]-=min;
		}
	}
	for(i=0;i<n;i++)
	{
		p=1;
		min=a[0][i];
		for(j=0;j<n;j++)
		{
			if(a[j][i]<min)
				min=a[j][i];
		}
		for(j=0;j<n;j++)
		{
			a[j][i]-=min;
		}
	}
	t=a[1][1];
	b[0][0]=a[0][0];
	if(n==2)
		return a[1][1];
	for(i=2;i<n;i++)
	{
		b[i-1][0]=a[i][0];
		b[0][i-1]=a[0][i];
	}
	for(i=2;i<n;i++)
	{
		for(j=2;j<n;j++)
		{
			b[i-1][j-1]=a[i][j];
		}
	}
	return t+cal(b,n-1);
}
void main()
{
    int n,i,j,k,m,t,a[100][101]={0},sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[j][k]);
			}
		}								//1?????
		printf("%d\n",cal(a,n));
	}									
}