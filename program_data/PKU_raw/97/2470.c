int main()
{
	int sum=0;int x100=0,x50=0,x20=0,x10=0,x5=0,x1=0;
	cin>>sum;
	x100=sum/100;sum=sum-100*x100;
	x50=sum/50;sum=sum-50*x50;
	x20=sum/20;sum=sum-20*x20;
	x10=sum/10;sum=sum-10*x10;
	x5=sum/5;sum=sum-5*x5;
	x1=sum/1;sum=sum-1*x1;
	cout<<x100<<endl;
	cout<<x50<<endl;
	cout<<x20<<endl;
	cout<<x10<<endl;
	cout<<x5<<endl;
	cout<<x1<<endl;


	cin.get();cin.get();
	return 0;
}