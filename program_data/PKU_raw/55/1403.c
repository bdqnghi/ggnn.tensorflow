int main()
{
	long convert_to10(char str[], int a);
	void convert_from10(long a, int b);
	int a, b;
	char str[100];
	cin >> a >> str >> b;

	convert_from10(convert_to10(str, a), b);
	return 0;
	
}

long convert_to10(char str[], int a)
{
	int len, i;
	long num10 = 0;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			num10 = num10 * a + str[i] - 'A' + 10;
		if (str[i] >= 'a' && str[i] <= 'z')
			num10 = num10 * a + str[i] - 'a' + 10;
		if (str[i] >= '0' && str[i] <= '9')
			num10 = num10 * a + str[i] - '0';
	}
	return num10;
}


void convert_from10(long a, int b)
{
	char str[10000];
	int i, j, k, len;
	for (i = 0;;i++)
	{
		k = a % b;
		if (k < 10)
			str[i] = k + '0';
		else
			str[i] = k - 10 + 'A';
	    a = (a - k) / b;
		len = i;
		
		if (a == 0)
		{
			for (j = len; j >= 0; j--)
				cout << str[j];
			break;
		}

	}
}




