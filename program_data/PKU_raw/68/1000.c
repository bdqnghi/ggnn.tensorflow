int yan(int n)
{
	if(n==2)
	return 1;
	else if(n!=2)
	{
		int i,c;
		double s;
		s=sqrt(n);
		c=(int)s+1;
		for(i=2;i<=c;i++)
		{
			if(i==2||(i+1)%2==0)
			{
			if(n%i==0)
			{
				return 0;
			}
			}
			if(i==c)
			return 1;	
		}
	}
}
main()
{
     int n,i,j;
     scanf("%d",&n);
     for(i=6;i<=n;i++)
     {
     	if(i%2==0)
     	{
     		double s;
     		s=i/2;
     		int c;
     		c=(int)s+1;
			if(yan(i-2)==1) printf("%d=2+%d\n",i,i-2);
			else if(yan(i-2)==0)
			for(j=3;j<=c;j++)
			{
				if((j+1)%2==0)
				{
					int xx,yy;
					xx=j;
					yy=i-j;
					if(yan(xx)==1&&yan(yy)==1)
					{
					printf("%d=%d+%d\n",i,j,i-j);
					break;	
					}
				}	
			}
     	}
     }
}