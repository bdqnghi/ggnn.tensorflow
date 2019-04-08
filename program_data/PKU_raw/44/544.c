int n,i;
void get();
void fanxu(int n);
int main()
{
	int j;
	for(j=1;j<=6;j++)
	{
		get();
		i=0;
		fanxu(n);
	}
	return 0;
}
void get()
{
	cin>>n;
	if(n<0) cout<<"-",n=-n;
	if(n==0) cout<<"0";
}
void fanxu(int n)
{
	if(n>0)
	{
		if(n%10!=0||i==1) cout<<(n%10),i=1;
		fanxu(n/10);
	}
	else cout<<endl;
}