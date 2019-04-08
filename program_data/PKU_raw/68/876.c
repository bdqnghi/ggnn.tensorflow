int check(int k)
{
	int i;
	int flag=1;
	if(k%2==0)
		return 0;
	for(i=3;i*i<=k;i=i+2)
		if(k%i==0)
			flag=0;
	
	if(flag==0)
		return 0;
	else 
		return 1;
		
}
int main()
{
	int i;
	int j;
	int n;
	
	int limit;
	cin>>limit;
	for(n=6;n<=limit;n=n+2)
	  for(i=2;i<=n/2;i++)
		if(check(i)&&check(n-i))
		{
			cout<<n<<"="<<i<<"+"<<n-i;
			if(n!=limit) cout<<endl;
			break;
		}
	
	
}