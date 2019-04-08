int main()
{int n,bai ,wushi,ershi,shi,wu,yi;
	cin>>n;
	bai=n/100;
	wushi=(n-100*bai)/50;
	ershi=(n-100*bai-50*wushi)/20;
	shi=(n-100*bai-50*wushi-20*ershi)/10;
    wu=(n-100*bai-50*wushi-20*ershi-10*shi)/5;
	yi=n%5;
	cout<<bai<<endl;
	cout<<wushi<<endl;
	cout<<ershi<<endl;
	cout<<shi<<endl;
	cout<<wu<<endl;
	cout<<yi<<endl;
	return 0;
}