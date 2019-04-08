int main()
{
	int n,k,mon[100],i,q;
	cin>>n;
	cin>>k;
	mon[n]=k;
	i=n;
	do
	{
		mon[n]=mon[n]+n;
		for(i=n-1;i>=1;i--)
		{
			if(mon[i+1]%(n-1)!=0)
			break;
			else
			mon[i]=n*mon[i+1]/(n-1)+k;
		}
	}while(i>=1);
	cout<<mon[1];
	cin>>q;
	return 0;
	
}