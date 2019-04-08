int main()
{
	int n,sum=0,number;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		number=i;
		if(number<=10)
		{
		   if(number!=7)
		       sum+=number*number;
		}
		else
		{
			if((number%7!=0)&&(number/10!=7)&&(number%10!=7))
               sum+=number*number;
		}
	}
	cout<<sum<<endl;
	return 0;
}
	 
