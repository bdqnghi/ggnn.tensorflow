int shulie(int);
int main()
{
	int n,i,j,tot;
	double sum=0;
	scanf("%d",&tot);
	for(j=0;j<tot;j++)
	{
		sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			sum+=(double)shulie(i+1)/shulie(i);
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}
int shulie(int x)
{
	int k;
	int sl[100];
	sl[0]=1;
	sl[1]=2;
	for(k=2;k<=x;k++)
	{
		sl[k]=sl[k-1]+sl[k-2];
	}
	return sl[x];
}