int a=1;
int yinzi(int j,int  n)
{   
    for(int i=j;i<n;i++)
	{
		if(n%i==0&&n!=i&&n/i>=i)
			{  
			    a++;
				yinzi(i,n/i);
			}
		
	}
	return 0;
			
}
int main()
{
	int n,s;
	cin>>s;
	for(int j=0;j<s;j++)
	{
		cin>>n;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0&&n/i>=i)
			{
				a++;
		         yinzi(i,n/i);
			}
		}
	    cout<<a<<endl;
	    a=1;
	}
	return 0;
}