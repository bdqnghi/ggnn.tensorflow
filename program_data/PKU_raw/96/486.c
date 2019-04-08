int main()
{
	char dividend[100], result[100];
	int i, remainder, len, temDivid, flag = 0;
	cin >> dividend;
	len = strlen(dividend);
	for (i = 0, temDivid = dividend[0] - '0'; i < len - 1; i++)
	{
		result[i] = temDivid / DIVISOR + '0';
		remainder = temDivid % DIVISOR;
		temDivid = remainder * 10 + (dividend[i + 1] - '0');
	}
	result[i] = temDivid / DIVISOR + '0'; // ????i = len????dividend[i + 1]??????len=1??????
	remainder = temDivid % DIVISOR;
	result[i + 1] = '\0';
	for (i = 0; result[i] == '0';)
		i++;
	if (result[i] == '\0')
		cout << 0 << endl << remainder << endl;
	else
		cout << result + i << endl << remainder << endl;
	return 0;
}