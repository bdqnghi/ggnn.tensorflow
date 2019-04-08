//*************************************************
//?????????
//??????
int n;//??????
int jiaogu(int n)//??????
{
	cin>>n;
	if(n==1)
		cout<<"End";
	while(n!=1)//???
	{
		if(n%2==0)
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
		}
		else if(n%2!=0)
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
		if(n==1)
			cout<<"End";
	}
	return 0;
}
int main()//???
{
	jiaogu(n);
	return 0;
}