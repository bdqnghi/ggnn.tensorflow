

int strReverse(char *str)
{
	int len = strlen(str);
	for (int i = 0; i<len / 2; i++)
	{
		char temp=str[i];
		str[i] = str[len - i-1];
		str[len - i-1] = temp;
	}
	return len;
}

int addBig(char *l, int lLen, char*s, int sLen, int *c)
{
	for (int i = 0; i < lLen; i++)
	{
		if (i < sLen)
		{
			c[i] = c[i] + l[i] - '0' + s[i] - '0' ;
			c[i + 1] = c[i] / 10;;
			c[i] %= 10;
		}
		else
		{
			c[i] = c[i] + l[i] - '0';
			c[i + 1] = c[i] / 10;
			c[i] %= 10;
		}
	}
	return c[lLen] ? (lLen + 1) : lLen;
}

void printBig(int *a, int len)
{
	int k = len - 1;
	while (a[k] == 0 && k > 0)
	{
		k--;
	}
	for (int i = k; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	char a[MAX], b[MAX];
	cin.getline(a, MAX);
	cin.getline(b, MAX);
	int aLen, bLen, cLen;
	aLen = strReverse(a);
	bLen = strReverse(b);
	int c[MAX] = { 0 };
	cLen = (aLen > bLen) ? addBig(a, aLen, b, bLen, c):addBig(b,bLen,a,aLen,c);
	printBig(c, cLen);
	return 0;
}
