int main()
{
	int n=0,i=0,sum=0;
	cin>>n;
    for(i=1;i<=n;i++)
	{
		if(i%7==0)
			sum=sum;
		else if(i/10==7)
		    sum=sum;
		else if(i-i/10*10==7)
			sum=sum;
		else
			sum=sum+i*i;
	}
	cout<<sum<<endl;
	return 0;
}