void ji(int m)
{
	cout<<m<<"*3+1="<<m*3+1<<endl;
}
void ou(int m)
{
	cout<<m<<"/2="<<m/2<<endl;
}
void f(int m)
{
	if(m==1) ;
	else{
	if(m%2==0)
		{
			ou(m);
			f(m/2);
	}
	else
		{
			ji(m);
			f(m*3+1);
	}
	}
}
int main()
{
	int n;
	cin>>n;
	f(n);
	cout<<"End"<<endl;
	return 0;
}