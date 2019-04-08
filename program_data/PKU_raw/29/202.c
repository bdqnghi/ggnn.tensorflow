int main()
{
	int m,i,n;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		int j=0,a=1,b=2,d;
		float c,sum=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			c=(float)b/a;
			d=b;
			b+=a;
			a=d;
			sum+=c;
		}
			printf("%.3f\n",sum);
	}
	return 0;
}
