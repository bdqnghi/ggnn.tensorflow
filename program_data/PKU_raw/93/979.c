int main()
{
	int n;
	int t=0;
	cin>>n;
	if(n%3==0)                      //?????3,5,7??
		t=t+3;
	if(n%5==0)
		t=t+5;
	if(n%7==0)
		t=t+7;
	if(t==0)                            //????
		cout<<"n";
	if(t==3)
		cout<<3;
	if(t==5)
		cout<<5;
	if(t==7)
		cout<<7;
	if(t==8)
		cout<<"3 5";
	if(t==12)
		cout<<"5 7";
	if(t==10)
		cout<<"3 7";
	if(t==15)
		cout<<"3 5 7";
	return 0;
}