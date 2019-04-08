void main()
{
	int n,i,j,k,t,m;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		j=i-2;
		for(k=2;k<=sqrt(n);k++)
		{
			if(j%k!=0)
				continue;
			else
				goto loop1;
		}
			printf("%d=2+%d\n",i,j);
		loop1:if(1);
		for(t=3;t<=n/2;t=t+2)
		{
			for(m=3;m<=sqrt(t);m=m+2)
			{
				if(t%m==0)
					goto loop2;
				else
					continue;
			}
			j=i-t;
			for(k=2;k<=sqrt(j);k++)
			{
				if(j%k!=0)
					continue;
				else
					goto loop2;
			}
				printf("%d=%d+%d\n",i,t,j);
				break;
				loop2:if(1);
		}
	}
}
		
