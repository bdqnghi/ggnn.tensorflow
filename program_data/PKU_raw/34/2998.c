int main()
{
	int a=0;//??????;
	cin>>a;
	int yushu=0;
	yushu=a%2;
	for(;a!=1;)
	{
	if(yushu==0)
	{
		cout<<a<<"/2="<<(a*0.5)<<endl;
		a=a/2;
		yushu=a%2;
	}
	else 
	{
		cout<<a<<"*3+1="<<(a*3+1)<<endl;
		a=a*3+1;
		yushu=a%2;
	}
	}
	cout<<"End"<<endl;
	return 0;
}