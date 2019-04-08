void daoxu(int n);
int main()
{
	int n;
	cin>>n;
	int b;
	cin>>b;
	daoxu(n-1);
	cout<<b;   //???????
	
	return 0;
}
void daoxu(int n)  //??
{
	int a;
	cin>>a;
	if(n==1)cout<<a<<' ';
	else {daoxu(n-1);
	cout<<a<<' ';}
}

