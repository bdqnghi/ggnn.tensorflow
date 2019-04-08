int main()
{
	int number;//?????
	cin>>number;
	while(number!=1)
	{
		if(number%2!=0)
		{
			cout<<number<<"*3+1=";
			number=number*3+1;
			cout<<number<<endl;
		}
		else
		{
			cout<<number<<"/2=";
			number=number/2;
			cout<<number<<endl;
		}
	}
	cout<<"End";
	return 0;
}