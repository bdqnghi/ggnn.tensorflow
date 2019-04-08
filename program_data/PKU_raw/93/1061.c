int main()
{
	int n,n0,flag=0;
	cin >> n;
	n0=n;
	if(n%3==0){n/=3;cout<<"3";flag=1;}
	if(n%5==0){
	if(n!=n0)cout<<" ";n/=5;
	cout<<5;flag=1;}
	if(n%7==0)
	{
	if(n!=n0)cout<<" ";n/=7;
	cout<<7;flag=1;}
	if(flag==0)cout<<'n';
	cout<<endl;
	return 0;
}
