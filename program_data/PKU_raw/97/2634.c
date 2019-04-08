int main()
{
	int money, a[7], i;
	cin >> money;
	a[0]=100; a[1]=50; a[2]=20; a[3]=10; a[4]=5; a[5]=1;
	for(i=0; i<6; i++)
	{
		cout << money/a[i] << endl;
		money=money%a[i];
	}
	return 0;
}