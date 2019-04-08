int main()
{
	int wei(int x);
	int i,t,n;
	cin>>n;
		t=0;
	for(i=1;i<=n;i++)
	{
		if(i%7!=0&&wei(i)==0)
		{
			t=t+i*i;
		}
	}
	cout<<t<<endl;
	return 0;
}
int wei(int x)
{
	int flag=0,a;
	while(x!=0)
	{
		a=x-x/10*10;
		x=x/10;
		if(a==7)
		{
			flag=1;
			break;
		}	
	}
	return(flag);
}