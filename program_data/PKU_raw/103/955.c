int main()
{
	char str[1000], s, temp = NULL;
	int i, sum;
	for (i = 0; i < 1000; i++)
	{
		cin.get(s);
		if (s == '\n')
		{
			cout << sum << ")" << endl;
			break;
		}
		else
		{
			if (s - 'a' >= 0 && s - 'a' <= 26)
				s = 'A' + s - 'a';
			if (temp != s)
			{
				if (temp != NULL)
					cout << sum << ")(" << s << ",";
				else
					cout << "(" << s << ",";
				temp = s;
				sum = 1;
			}
			else
			{
				sum++;
			}
		}
	}
	return 0;
}