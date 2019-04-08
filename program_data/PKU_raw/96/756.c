int main()
{
	char dividend[100], quotient[100];
	int remainder, i;
	cin >> dividend;
	remainder = dividend[0] - '0';
	quotient[0] = '0';
	quotient[1] = '\0';
	for (i = 1; dividend[i] != '\0'; i++)
	{
		quotient[i - 1] = (remainder * 10 + (int)(dividend[i] - '0')) / 13 + '0';
		remainder = (remainder * 10 + (int)(dividend[i] - '0')) % 13;
	}
	if (quotient[1] != '\0') 
	    quotient[i - 1] = '\0';
	if (quotient[0] == '0' && quotient[1] != '\0')
		cout << quotient + 1 << endl;
	else
		cout << quotient << endl;
	cout << remainder;
	return 0;
}