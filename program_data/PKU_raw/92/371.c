int min(int a[],int n)
{
	int min=a[1],i;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	return min;
}
void main()
{
	int T[1100],Q[1100],n=1,i,k,e,s,money=0,first,endT,endQ;
	while(n!=0)
	{
		scanf("%d",&n);
		first=0,endT=n-1,endQ=n-1;
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&T[i]);
		for(i=0;i<n;i++)
			scanf("%d",&Q[i]);
		for(k=1;k<n;k++)
		{
			for(i=0;i<n-k;i++)
			{
				if(T[i]<T[i+1])
				{
					e=T[i];
					T[i]=T[i+1];
					T[i+1]=e;
				}
				if(	Q[i]<Q[i+1])
				{
					e=Q[i];
					Q[i]=Q[i+1];
					Q[i+1]=e;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(T[first]>Q[i])
			{
				first++;
				money+=200;
			}
			else if(T[first]<Q[i])
			{
				endT--;
				money-=200;
			}
			else if(T[first]==Q[i])
			{
				for(k=endT,s=endQ;k>=first;k--,s--)
				{
					if(T[k]>Q[s])
					{
						money+=200;
						endT--;
						endQ--;
					}
					else
					{
						if(T[k]<Q[i]) 
						money-=200;
						endT=k-1;
						endQ=s;
						break;               
					}
				}
			}
			if(first>endT)
				break;
		}
		printf("%d\n",money);
		money=0;
	}
}