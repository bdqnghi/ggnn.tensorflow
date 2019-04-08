//????????
//2010?11?23?
//1000012753 ???
int main()
{
	int len, count = 0, num;
	char str[200], *p = NULL;
	cin.getline(str, 200);
	len = strlen(str);
	for (p = str; p < str + len; ++p)
	{
		if (*p == ' ' && *(p + 1) == ' ')
		{
			num = 0;
			while (*(p + 1) == ' ')
			{
				p++;
				num++;
			}
			*(p - num + 1) = '\0';
			strcat(str, p + 1);
			len = len - num;
			p = p - num;
		}
	}
	cout << str << endl;
	return 0;
}