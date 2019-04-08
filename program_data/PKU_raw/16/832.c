int main()
{
	int t[5]={1,10,100,1000,10000};
	int x[6];

	int num;
	cin >> num;

	int length;								//length??num???
	length = (num >= t[4]) + (num >= t[3])
		   + (num >= t[2]) + (num >= t[1])
		   + (num >= t[0]);
	for (int i = 1 ; i <= length ; i++)
	{
		x[i] = (num % t[i])/t[i-1];
	}

	if (length == 0)
		cout << "0";
	else
	{
	for (int j = 1 ; j <= length ; j++)
	{
		cout << x[j];
	}
	}
	return 0;
}