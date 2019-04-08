void calcu(int k);
int main()
{
	int n;
	cin>>n;
	if(n==1)
		cout<<"End"<<endl;
	else
		calcu(n);
	return 0;
}

void calcu(int k)
{
	if(k%2==0)
	{
		cout<<k<<"/2="<<(k/2)<<endl;
		if(k/2==1)
			cout<<"End"<<endl;
		else
			calcu(k/2);
	}
	else 
	{
		cout<<k<<"*3+1="<<(3*k+1)<<endl;
		if(3*k+1==1)
			cout<<"End"<<endl;
		else 
			calcu(3*k+1);
	}

}