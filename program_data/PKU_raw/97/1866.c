int main()
{
	int n,k1=0,k2=0,k3=0,k4=0,k5=0,k6=0,w;
	cin>>n;
	k1=n/100;
	k2=(n-100*k1)/50;
	k3=(n-100*k1-50*k2)/20;
	k4=(n-100*k1-50*k2-20*k3)/10;
	k5=(n-100*k1-50*k2-20*k3-10*k4)/5;
	k6=(n-100*k1-50*k2-20*k3-10*k4-5*k5);
	cout<<k1<<endl;
	cout<<k2<<endl;
	cout<<k3<<endl;
	cout<<k4<<endl;
	cout<<k5<<endl;
	cout<<k6<<endl;
	cin>>w;
	return 0;
}
