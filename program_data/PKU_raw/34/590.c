int a[100][100];
void change(int n)
{
	
	if (n==1)
	{
		cout<<"End"<<endl;
	}
	else
	{
		if (n%2==0)
		{
			cout<<n<<'/'<<2<<'='<<n/2<<endl;
			change(n/2);
		}
		else
		{
			cout<<n<<'*'<<3<<'+'<<1<<'='<<n*3+1<<endl;
			change(n*3+1);
		}
	}
}













int main()
{
	int n;
	cin>>n;
	change (n);

	



















	return 0;
}