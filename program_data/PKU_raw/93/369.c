int main()
{
	int a;
	cin>>a;
	if(a%105==0)
		cout<<"3 5 7";
	else if(a%15==0)
		cout<<"3 5";
	else if(a%21==0)
		cout<<"3 7";
	else if(a%35==0)
		cout<<"5 7";
	else if(a%3==0)
		cout<<3;
	else if(a%5==0)
		cout<<5;
	else if(a%7==0)
		cout<<7;
	else
		cout<<'n';
	return 0;
}