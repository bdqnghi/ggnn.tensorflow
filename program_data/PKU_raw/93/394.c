int main()
{
	int num=0;//??????NUM
	cin>>num;
	if(num%105==0)
	{
		cout<<"3 5 7";
	}
	if(num%15==0&&num%7!=0)
	{
		cout<<"3 5";
	}
	if(num%21==0&&num%5!=0)
	{
		cout<<"3 7";
	}
	if(num%35==0&&num%3!=0)
	{
		cout<<"5 7";
	}
	if(num%3==0&&num%5!=0&&num%7!=0)
	{
		cout<<"3";
	}
	if(num%3!=0&&num%5==0&&num%7!=0)
	{
		cout<<"5";
	}
	if(num%3!=0&&num%5!=0&&num%7==0)
	{
		cout<<"7";
	}	
	if(num%3!=0&&num%5!=0&&num%7!=0)
	{
		cout<<"n";
	}
	return 0;
}
