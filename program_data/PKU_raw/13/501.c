int main()
{
	int n;
	int number[1000000];
	cin >> n;
	for (int i1=0;i1<n;i1++)
	{
		cin >> number[i1];
	}
	for (int i2=0;i2<n;i2++)
	{
		for (int i3=i2+1;i3<n;i3++)
		{
			if (number[i2]==number[i3])
			{
				number[i3]=0;
			}
		}
	}
	cout << number[0];
	for (int i4=1;i4<n;i4++)
	{
		if (number[i4]!=0)
		{
			cout <<  " " <<number[i4];
		}
	}
	return 0;
}