
int main()
{
	int m,sz[100],i,j;
	double a,a1,a2,b,b1,b2,sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++)
	{
		if(sz[i]==1)
			printf("2.000\n");
		if(sz[i]==2)
			printf("3.500\n");
		if(sz[i]>2)
		{
			a1=2;
			a2=3;
			b1=1;
			b2=2;
			sum=3.500;
			for(j=3;j<=sz[i];j++)
			{
				a=a1+a2;
				a1=a2;
				a2=a;
				b=b1+b2;
				b1=b2;
				b2=b;
				sum=sum+a2/b2;
			}
			printf("%.3lf\n",sum);
		}
	}
	return 0;
}
