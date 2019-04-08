int main()
{
	char str[100], t;
	char *p = str, *q = NULL;
	int count = 0;
	gets(str);
	for (p = str; *p != '\0'; p++)
	{
		if (*(p - 1) == ' ' && *p == ' ')
		{
			for (q = p; ; q++)
			{
				t = *q;
				*q = *(q + 1);
				*(q + 1) = t;
				if (*q == '\0')
				{
					break;
				}
			}
			if (*p == ' ')
			{
				p--;
			}
		}
	}
	cout << str << endl;
	return 0;
}