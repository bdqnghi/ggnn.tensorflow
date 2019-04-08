int main()
{
	int n=0,sum1=0,sum2=0,i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i<=10)
		{
			if(i!=7)
				sum1=sum1+i*i;
            else 
				sum1=sum1;
		}
		if(i>10)
		{
			if(i%7!=0&&i/10!=7&&(i-10*(i/10))!=7)
			sum2=sum2+i*i;
		    else
		    sum2=sum2;
		}
	}
	cout<<sum1+sum2<<endl;
	return 0;
}
