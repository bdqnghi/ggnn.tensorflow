int fun(int m);                                       //??????
int a;                                                //??????
int main()
{
	int n;
	cin>>n;
	a = n; 
	if(n == 1)
		cout<<"End"<<endl;                 //?????1,???End
	else
	{
		while(fun(a) != 1)                //?????1,?????fun()??,???1??
			fun(a);
		cout<<"End"<<endl;
	}
	return 0;
}
int fun(int m)                                      //?????
{
	if(m % 2 != 0)
	{
		a = m * 3  + 1;
		cout<<m<<"*3+1="<<a<<endl;
		return a;
	}
	else
	{
		a = m / 2;
		cout<<m<<"/2="<<a<<endl;
		return a;
	}
}

