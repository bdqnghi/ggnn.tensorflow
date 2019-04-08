
int main()
{
	int num;
	char a[1001], temp;
	cin.getline(a, 1001);
	char *p = a;
	while (*p != '\0')
	{
		num = 0;
		if (*p >= 65 && *p <= 90)
		{
			temp = *p;
			cout << "(" << *p << ",";
		}
		else if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
			temp = *p;
			cout << "(" << *p << ",";
		}
		p++;
		while (*p == temp || *p == temp + 32)
		{
		    num++;
			p++;
		}
		cout << num + 1 << ")";
	}

	return 0;
}

