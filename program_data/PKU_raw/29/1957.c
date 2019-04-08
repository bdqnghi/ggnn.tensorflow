// ????.cpp : ??????????????
//



int main()//(int argc, _TCHAR* argv[])
{
	int m,M;
	scanf("%d",&M);
	double a[5000],b[5000];
	int i,j;
	a[1]=2;a[2]=3;
	b[1]=1;b[2]=2;
	for(i=3;i<=4999;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	for(m=1;m<=M;m++)
	{
		int n,N;
		scanf("%d",&N);
		double s=0;
		for(n=1;n<=N;n++)
		{
			s=s+a[n]/b[n];
		}
		printf("%.3f\n",s);
	}
	return 0;
}

