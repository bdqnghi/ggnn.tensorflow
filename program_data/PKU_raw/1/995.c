int m=0;
int main()
{
	void count(int a,int b);
	int r,i,k,n;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		scanf("%d",&n);
		for(k=2;k<=sqrt(n);k++)
		{
			if(n%k==0)
			{
				m++;
				count(k,n/k);
			}
		}
		printf("%d\n",m+1);
		m=0;
	}
}

void count(int a,int b)
{
	int j;
	double t=sqrt(b);
	for(j=a;j<=t;j++)
	{
		if(b%j==0)
		{
			m++;
			count(j,b/j);
		}
	}
}
