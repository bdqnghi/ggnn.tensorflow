int main()
{
	float sum=0;
	float a,b,c,d,e,f;
	int i,k,m,n;
	scanf("%d",&m);
	k=1;
	while(k<=m)
	{
		scanf("%d",&n);
		if(n==1)
		{
			sum=2;
		}
		else
		{
			if(n==2)
			{
				sum=3.5;
			}
			else
			{
				i=3;
				a=2;b=1;c=3;d=2;
				sum=3.5;
				while(i<=n)
				{
					e=a+c;f=b+d;
					a=c;b=d;
					c=e;d=f;
					sum=sum+c/d;
					i++;
				}
			}
		}
		printf("%.3f\n",sum);
		k++;
	}
	return 0;
}
