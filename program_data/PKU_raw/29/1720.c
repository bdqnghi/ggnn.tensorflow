double f(int n)
{
	if(n==1)
		return 2;
	else
		return 1+1/f(n-1);
}
int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
	{
		double s=0.0;
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			s+=f(j);
		}
		printf("%.3lf\n",s);
	}
	return 0;
}