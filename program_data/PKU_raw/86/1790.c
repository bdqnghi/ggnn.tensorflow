int main()
{
	int n,num[20],m,sum;
	cin>>n;
	while(n)
	{
		sum=0;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<m;i++)
		{
			if((num[i]+3*(i+1))>63)
			{
				sum=num[i-1]+60-num[i-1]-3*i;
				break;
			}
			else if((num[i]+3*(i+1))>=60)
			{
				sum=num[i];
				break;
			}
		}
		if(sum==0)
		{
			sum=60-m*3;
		}
		if(m==0)
		cout<<60<<endl;
		else
		cout<<sum<<endl;
		n--;
	}
	 
	return 0;
}
