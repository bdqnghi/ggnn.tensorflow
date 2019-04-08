int main()
{
	int m,i=1,n,t,x;
	double s,j,r;
	scanf("%d",&m);
	while(i<=m)
	{
		scanf("%d",&n);
		for(j=1,r=2,t=1,s=0;t<=n;t++)
		{
            s=s+r/j;
			x=j+r;
			j=r;
			r=x;
		}
		printf("%.3lf\n",s);
                  i=i+1;
	}
		return 0;
	}


