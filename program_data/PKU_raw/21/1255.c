int main()
{
	int n,i,j,m;
	cin>>n;
	
	float s,b[350],p,a[350],c[350];
	s=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	s=s/n;
	for(i=0;i<n;i++)
	{
		b[i]=a[i]-s;
		b[i]=abs(b[i]);
	}
	p=b[0];
	for(i=0;i<n;i++)
	{
		if(p<b[i])
			p=b[i];
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(p==b[i])
		{
			c[j]=a[i];
			j=j+1;
			
		}
	}
	for(i=0;i<j;i++)
		for(m=0;m<j-i-1;m++)
		{
			if(c[m]>c[m+1])
			{
				p=c[m];
				c[m]=c[m+1];
				c[m+1]=p;
			}
		}
	cout<<c[0];
	for(i=1;i<j;i++)
		cout<<","<<c[i];
	return 0;
}