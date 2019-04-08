int main()
{
	int k=0,i=0,sum=0;
	cin>>k;
	for(i=0;i<k+1;i++)
	{
		if(i%7!=0)
		{
			if((i-7)%10!=0)
			{
				if((i-(i%10))/10!=7)
					sum=sum+(int)pow(1.0*i,2.0);
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}