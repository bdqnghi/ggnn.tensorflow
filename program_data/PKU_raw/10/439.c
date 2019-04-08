int main()
{
	int i,k,h[30],l[30],r[30];
	cin>>k;
	for( i=0;i<k;i++)
	{
		cin>>h[i];
		l[i]=1;
		r[i]=1;
	}
	for( i=1;i<k;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(h[j]>=h[i]&&(l[j]+1)>l[i])
			{
				l[i]=l[j]+1;
			}
		}
	}
	for( i=k-2;i>0;i--)
	{
		for(int j=k-1;j>i;j--)
		{
			if(h[j]<=h[i]&&(r[j]+1)>r[i])
			{
				r[i]=r[j]+1;
			}
		}
	}
	int m=0;
	for(i=0;i<k;i++)
	{
		if(l[i]+r[i]-1>m)
		{
			m=l[i]+r[i]-1;
		}
	}
	cout<<m<<endl;
	return 0;
}


