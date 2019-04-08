int main()
{
	int n=0;
	cin>>n;
	int i=0,sum=0,a1=0,a2=0,a3=0;
	for(i=1;i<=n;i++)
	{
		a1=i%10;
		a2=i%7;
		a3=(i-a1)/10;
		if(a1!=7 && a2!=0 && a3!=7)
		{
			sum=sum+i*i;
		}
	}
    cout<<sum<<endl;
	return 0;

}