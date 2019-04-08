int compare(const void *p,const void *q)
{
	return *((int *)p)-*((int *)q);
}
int main()
{
	int n,i,t[1000],q[1000];
	while(cin>>n)
	{
		if(n==0)
			break;
		int count=0;
		for(i=0;i<n;i++)
			cin>>t[i];
		for(i=0;i<n;i++)
			cin>>q[i];
		qsort(t,n,sizeof(int),compare);
		qsort(q,n,sizeof(int),compare);
		int tmin=0,tmax=n-1,qmin=0,qmax=n-1;
		while(tmin<=tmax)
		{
			if(t[tmax]<q[qmax])
			{
				qmax--;
				tmin++;
				count--;
			}
			else if(t[tmax]>q[qmax])
			{
				qmax--;
				tmax--;
				count++;
			}
			else
			{
				if(t[tmin]>q[qmin])
				{
					count++;
					tmin++;
					qmin++;
				}
				else if(t[tmin]<q[qmin])
				{
					count--;
					tmin++;
					qmax--;
				}
				else
				{
					if(t[tmax]>t[tmin])
					{
						count--;
						tmin++;
						qmax--;
					}
					else
					{
						break;
					}
				}
			}
		}
		cout<<count*200<<endl;
	}
	return 0;
}