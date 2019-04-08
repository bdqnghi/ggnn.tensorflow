int main()
{
	int n,num1=0,n1,num2=0,n2,num3=0,n3,num4=0,n4,num5=0,n5,num6=0;
	cin>>n;
	num1=(n-n%100)/100;
	n1=n%100;
	cout<<num1<<endl;
	num2=(n1-n1%50)/50;
	n2=n1%50;
	cout<<num2<<endl;
	num3=(n2-n2%20)/20;
	n3=n2%20;
	cout<<num3<<endl;
	num4=(n3-n3%10)/10;
	n4=n3%10;
	cout<<num4<<endl;
	num5=(n4-n4%5)/5;
	n5=n4%5;
	cout<<num5<<endl;
	num6=n5;
	cout<<num6<<endl;
	return 0;
}