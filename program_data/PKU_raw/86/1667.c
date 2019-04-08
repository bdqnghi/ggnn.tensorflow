int main()
{
	int n,a,b[30],c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a==0)
			c=60;
		else
		{
			for(int j=0;j<a;j++)
			{
				cin>>b[j];
				if(b[j]+3*j<58)
				{
					c=60-3*a;
				}else if(b[j]+3*j>57&&b[j]+3*j<61)
				{
					c=b[j];
				
				}else if(b[j]+3*j>60&&b[j-1]+3*j-3<58)
				{
					c=60-3*j;
				
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}