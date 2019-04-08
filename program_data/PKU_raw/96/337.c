// ??13
// ??? 1100012820
// 20111102
//******************
int main()
{
	char num[100] = {""};
	int ans[100] = {0};
	cin >> num;
	int i, j = 0;
	int yushu = num[0] - '0';
	for (i = 1; i < strlen(num); i++)
	{
		if ((yushu * 10 + (num[i] - '0')) > 12)
		{
			ans[i - 1] = (yushu * 10 + (num[i] - '0')) / 13;
			yushu = (yushu * 10 + (num[i] - '0')) % 13;
		}
		else
		{
			ans[i - 1] = 0;
			yushu = (yushu * 10 + (num[i] - '0'));
		}
		j++;
	}
	if ((ans[0] == 0) && (j <= 1)) cout << "0" << endl;
	else 
	{
		if (ans[0] == 0) i = 1;
		else i = 0;
		for (; i < j; i++)
			cout << ans[i];
		cout << endl;
	}
	cout << yushu << endl;
	return 0;
}