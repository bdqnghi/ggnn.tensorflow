void main()
{
	int n,tian[1000],qi[1000];
	int i,*p,*q,*p1,*q1,sum,t,temp;
	while(1)
	{
		sum=0;
		
		scanf("%d",&n);
if(n==0)
return;
		for(i=0;i<n;i++)
		{
			scanf("%d",&tian[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&qi[i]);
		}
		t=n;
		while(t--)
		{
			for(i=0;i<t;i++)
			{
				if(tian[i]<tian[i+1])
				{
					temp=tian[i];
					tian[i]=tian[i+1];
					tian[i+1]=temp;
				}
			}
			for(i=0;i<t;i++)
			{
				if(qi[i]<qi[i+1])
				{
					temp=qi[i];
					qi[i]=qi[i+1];
					qi[i+1]=temp;
				}
			}

		}
		p=tian+n-1;
		p1=tian;
		q=qi+n-1;
		q1=qi;
		while(p>=p1)
		{
			if(*p>*q)
			{
				sum=sum+200;
				p--;q--;
			}
			else if(*p<*q)
			{
				sum=sum-200;
				p--;
				q1++;
			}
			else if(*p==*q)
			{
				if(*p1>*q1)
				{
					sum=sum+200;
					p1++;q1++;
				}
				else if(*p1<*q1)
				{
					sum=sum-200;
					p--;
					q1++;
				}
				else if(*p1==*q1)
				{
					if(*p1==*p)
					{
						sum=sum+0;
						break;
					}
					else
					{
						sum=sum-200;
						p--;
						q1++;
					}
				}
			}
			
		}
		printf("%d\n",sum);
	}
}