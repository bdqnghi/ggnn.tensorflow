int main()
{
	int n,k,s,m=1,g=0;             
	cin>>n>>k;
	for(m=1;g!=n;m++)
	{
		g=0;
		s=m;
		for(int i=0;i<n;i++)
	    {
			if(m%(n-1)==0)
            {
				m=m*n/(n-1)+k;
			    g++;
				if(g==n)
		{
			cout<<m;
	        break;
		}
			}
			else
				break;
	    }
		m=s;
	}
	return 0;
}