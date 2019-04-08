int main()
{
	int a;
	int bai,wushi,ershi,shi,wu,yi;
	cin>>a;
	bai=a/100;
	a=a%100;
	wushi=a/50;
	a=a%50;
	ershi=a/20;
	a=a%20;
	shi=a/10;
	a=a%10;
	wu=a/5;
	a=a%5;
	yi=a;
	cout<<bai<<endl;
	cout<<wushi<<endl;
	cout<<ershi<<endl;
	cout<<shi<<endl;
	cout<<wu<<endl;
	cout<<yi<<endl;
	return 0;
}