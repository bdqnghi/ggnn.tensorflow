int panduan(int a)
{
	if(a%2==1)
		return a*3+1;
	if(a%2==0)
		return a/2;
}
void shuchu(int b)
{
	if(b%2==1)
		cout<<b<<"*3+1="<<b*3+1<<endl;
	if(b%2==0)
		cout<<b<<"/2="<<b/2<<endl;
}
int main()
{
	int n;
	cin>>n;
	while(n!=1){
		shuchu(n);
		n=panduan(n);
	}
	cout<<"End"<<endl;
	return 0;
}
