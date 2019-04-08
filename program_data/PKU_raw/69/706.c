int main( )
{
	char a[251], b[251], c[251];
	int p=0, n;
	cin >> c;
	for (int i = strlen(c) - 1; i >= 0; i--)  //??????????????a[i]
		a[strlen(c) - 1 - i] = c[i];
	for (int i = strlen(c); i < 251; i++)     //???????0
		a[i] = '0';
	cin >> c;
	for (int i = strlen(c) - 1; i >= 0; i--)  //??????????????b[i]
		b[strlen(c) - 1 - i] = c[i];
	for (int i = strlen(c); i < 251; i++)     //???????0
		b[i] = '0';
	for (int i = 0; i < 251; i++)      //?a[i],b[i]????????
	{
		c[i] = a[i] + b[i] + p - 48;
		if (c[i] >= 58)                //???
		{
			c[i] -= 10;
			p = 1;
		}
		else p = 0;                    //???
	}
	for (n = 250; n >= 0; n--)    //?a[i],b[i]??c[i]??????????0??????
		if (c[n] != '0') break;
	if (n == -1) cout << 0;       //????0???0
	for (; n >= 0; n--)
		cout << c[n];
	cout << endl;
	return 0;
}