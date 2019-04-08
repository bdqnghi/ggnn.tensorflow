int main()
{
	int a[200000],n,m,i,j;
	cin >>n;
	for(i=0;i<n;i++)
	{
		cin >>a[i];
	}
	i=0;
	while(i<n)
	{
		m=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i>j)
			{
				m=m+1;
			}
		}
        if(m==0&&i==0)
		     cout<<a[i];
	    if(m==0&&i!=0)
		     cout<<' '<<a[i];
		i=i+1;
	}
	return 0;
}



