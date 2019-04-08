
int main()
{
	int u, v, l, num = 0;
	char str[100], *p = NULL, *r = NULL;
	cin.getline(str, 100);
	p = str;
	r = str;
	l = strlen(str);
	for (u = 0; u <= l - 1; u++)
	{
		if(*(p + u) != ' ')
		{
			*(p  + u - num) = *(p + u);
		}
		else
		{
			*(p + u - num) = ' ';
			for (v = u + 1; *(p + v) == ' '; v++)
			{
				num++;
			}
			u = v - 1;
		}
	}
	u = 0;
	for (u = 0; u <= l - 1 - num; u++)
	{
		cout << *(p + u);
	}
	cout << endl;
	return 0;
}