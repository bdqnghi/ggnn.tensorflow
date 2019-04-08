
int main()
{
	char a[101];
	int i, j, k;
	int b[101], c[101];
	int lenA, yushu, pro;
	cin.getline(a, 101);
	lenA = strlen(a);
	for (i = 0, j = 1; i <= lenA - 1; i++)
	{
		b[j++] = a[j - 1] - '0';
	}
	if ((lenA == 2 && b[1] * 10 + b[2] <= 12) || lenA == 1)
	{
		if (lenA == 1)
			cout << 0 << endl << b[1] << endl;
		else
			cout << 0 << endl << (b[1] * 10 + b[2]) % 13 << endl;
	}
	else
	{
		if ( b[1] * 10 + b[2] >= 13)
		{
			yushu = (b[1] * 10 + b[2]) % 13;
			c[2] = (b[1] * 10 + b[2] - yushu) / 13;
			for (i = 3; i <= lenA; i++)
			{
				pro = yushu * 10 +b[i];
				yushu = pro % 13;
				c[i] = (pro - yushu) / 13;
			}
			for (k = 2; k <= lenA; k++)
			{
				cout << c[k];
			}
			cout << endl;
		}	
		else
		{
			yushu = (b[1] * 100 + b[2] * 10 + b[3]) % 13;
			c[3] = (b[1] * 100 + b[2] * 10 + b[3] - yushu) / 13;
			for (i = 4; i <= lenA; i++)
			{
				pro = yushu * 10 +b[i];
				yushu = pro % 13;
				c[i] = (pro - yushu) / 13;
			}
			for (k = 3; k <= lenA; k++)
			{
				cout << c[k];
			}
			cout << endl;
		}
		cout << yushu << endl;
	}
	return 0;
}