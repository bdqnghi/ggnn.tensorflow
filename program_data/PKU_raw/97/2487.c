int main()
{
	int sum;
	int a1,a2,a3,a4,a5,a6;
	cin>>sum;
	a1 = sum / 100;
	sum = sum - a1 * 100;
	a2 = sum / 50;
	sum = sum - a2 * 50;
	a3 = sum / 20;
	sum = sum - a3 * 20;
	a4 = sum / 10;
	sum = sum - a4 * 10;
	a5 = sum / 5;
	sum = sum - a5 * 5;
	a6 = sum / 1;
	cout<<a1<<'\n'<<a2<<'\n'<<a3<<'\n'<<a4<<'\n'<<a5<<'\n'<<a6;
	return 0;
}