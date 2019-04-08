void main()
{
	int n,i,j,m,all;
	scanf("%d",&n);
	if(n<=4)
		printf("empty");
	else
	{	
		for(i=3;i<=n-2;i+=2)
		{
			m=0;
			all=0;
			for(j=3;j<i/2;j++)
			{
				if(i%j!=0)
					m++;
				all++;
			}
			if(m==all)
			{
				m=0;
				all=0;
				for(j=3;j<(i+2)/2;j++)
				{
					if((i+2)%j!=0)
						m++;
					all++;
				}
				if(m==all)
				{
					printf("%d %d\n",i,i+2);
				}
			}
		}
			
	}
}