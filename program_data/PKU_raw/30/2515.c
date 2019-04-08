void main()
{
	int n,i,s=0;
	scanf("%d",&n);
	if(n>=10)
	{
	    for(i=1;i<=n;i++)
		{
		    if((i%7==0)||((i/10)==7)||((i%10)==7))
			{
				continue;
			}
			if((i%7!=0)&&((i/10)!=7)&&((i%10)!=7))
			{
				s=s+i*i;
			}
		}
	}
	if(n>=1&&n<10)
	{
		for(i=1;i<=n;i++)
		{
		    if(i%7!=0)
			{
				s=s+i*i;
			}
			else continue;
		}
	}
	printf("%d\n",s);
}

