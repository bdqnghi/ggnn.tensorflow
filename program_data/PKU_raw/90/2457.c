int g(int a, int b)	;
int f(int a, int b);
int i, n, a, b;
int main()
{
	cin>> n;
	for(i= 0; i< n; i++)
	{
		cin>> a >> b;
		cout<<f(a, b)<<endl;
	}
	return 0;
}
int f(int a, int b)
{
	if (a==0) return 1;
	if(b==1)
		return 1;
	int num=0;
	for(int i=0; i<b; i++)
		num+=g(a, b-i);
	//cout<<a<<" "<<b<<" "<<num<<endl;
	return num;
}
	
int g(int a, int b)	//????????
{
	if(a<b)
		return 0;
	int num=f(a-b,b);
	//cout<<"g:"<<a<<" "<<b<<" "<<num<<endl;
	return num;//???????????
}
