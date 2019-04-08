void main()
{
	int i,j,k1=1,k2=1,t1=0,t2=0,n;
	scanf("%d",&n);
	if(n<5) printf("empty");
	else
	{
		for(i=3;i<n;i++)
		{
			for(j=2;j<=sqrt(i);j++)
				if(i%j==0)
				{
					k1=0;break;
				}
			if(k1==1)
			{
				t1=i;
				t2=t1+2;
			for(j=2;j<=sqrt(t2);j++)
				if(t2%j==0)
				{
					k2=0;
					break;
				}
			if(k2==1)
				printf("%d %d\n",t1,t2);
			}
			k1=1;k2=1;
		}
		if(t2==0)
			printf("empty");
	}
}

