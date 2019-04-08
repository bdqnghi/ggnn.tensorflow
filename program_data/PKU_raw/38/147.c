int main()
{
	double a[100][100],b,s;
	int n,m,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=0;
		s=0;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%lf",*(a+i)+j);
		}
		for(j=0;j<m;j++)
		{
			b=b+a[i][j];
		}
		b=b/m;
		for(j=0;j<m;j++)
		{
			s=s+pow((a[i][j]-b),2);
		}
		s=s/m;
		s=pow(s,0.5);
		printf("%.5f\n",s);
	}
	return 0;
}
