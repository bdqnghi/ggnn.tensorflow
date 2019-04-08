int main()
{
	char c;
	int flag = 0;
	c = cin.get();
	while (c != '\n')
	{
		if (c >= '0' && c <= '9')
		{
			if (flag == 0 && c == '0')
			{
				while (c != '0')
					c = cin.get();
			}
			cout << c;
			flag = 1;
		}
		else if (flag)
		{
			cout << endl;
			flag = 0;
		}
		c = cin.get();
	}
	return 0;
}