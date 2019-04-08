void main()
{
	int n,k,i,m,s,t;
	scanf("%d%d",&n,&k);
	for(s=n+k;;s++)
	{
		t=s;
		m=0;
		if(t%n==k)
		{
		for(i=1;i<n;i++)
		{
			t=(t-k)-(t-k)/n;
			if(t%n==k&&t>=k+n)
			{
		        m=m;
			}
			else 
			{
				m=m+1;break;
			}
		}
		if(m==0)
		{
			printf("%d\n",s);
			break;
		}
		else continue;
		}
	}


}