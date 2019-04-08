int main()
{
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c == ' ')
		{
			cout << " ";
			while (c == ' ')
				c = getchar();
		}
		cout << c;
		c = getchar();
	}
	return 0;
}