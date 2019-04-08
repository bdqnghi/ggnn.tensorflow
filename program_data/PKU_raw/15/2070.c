void main()
{
	int n,p,a=0,b,m=0,flag=0,i;
	scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&p);
		if(p==0)
		{
			if(m==0)
			{
				flag=1;
				a++;
				m++;
			}
			else
			{
				if(flag==1)
				{
					m++;
					a++;
				}
				else
				{
					m++;
				}
			}
		}
		else
		{
			if(flag==1)
				flag=0;
		}
	}
	b=m/2-a;a=a-2;
	printf("%d",a*b);
}

