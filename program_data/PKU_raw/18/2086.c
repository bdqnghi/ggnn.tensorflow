int main()
{
	int n,a[100][100]={0},p,sum,i,j,k;
	void m1(int n,int a[100][100]);
	void m2(int n,int a[100][100]);
	void deal(int n,int a[100][100]);
	scanf("%d",&n);
	k=n;
	while(k--)
	{
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		p=n-1;
		while(p)
		{
			m1(p+1,a);m2(p+1,a);
			sum+=a[1][1];
			deal(p+1,a);
			p--;
		}
		printf("%d\n",sum);
	}
	return 0;
}
void m1(int n,int a[100][100])
{
	int min,i,j;
	for(i=0;i<n;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(!min)break;
			if(a[i][j]<min)min=a[i][j];
		}
		if(min)for(j=0;j<n;j++)a[i][j]-=min;
	}
}
void m2(int n,int a[100][100])
{
	int min,i,j;
	for(j=0;j<n;j++)
	{
		min=a[0][j];
		for(i=0;i<n;i++)
		{
			if(!min)break;
			if(a[i][j]<min)min=a[i][j];
		}
		if(min)for(i=0;i<n;i++)a[i][j]-=min;
	}
}
void deal(int n,int a[100][100])
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=1;j<n-1;j++)
			a[i][j]=a[i][j+1];
	for(i=0;i<n-1;i++)
		for(j=1;j<n-1;j++)
			a[j][i]=a[j+1][i];
}