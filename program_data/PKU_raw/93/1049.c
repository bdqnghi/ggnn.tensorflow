int main()
{
	int n;//??????
	cin>>n;
	int a,b,c;
	a=n%3;
	b=n%5;
	c=n%7;//??n??3?5?7???
	if(a==0&&b==0&&c==0)
		cout<<"3 5 7";
	if(a==0&&b==0&&c!=0)
		cout<<"3 5";
	if(a==0&&b!=0&&c==0)
		cout<<"3 7";
	if(a==0&&b!=0&&c!=0)
		cout<<"3";
	if(a!=0&&b==0&&c==0)
		cout<<"5 7";
    if(a!=0&&b==0&&c!=0)
		cout<<"5";
	if(a!=0&&b!=0&&c==0)
		cout<<"7";
	if(a!=0&&b!=0&&c!=0)
		cout<<"n";
	getchar();
	getchar();
	return 0;
}