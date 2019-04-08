int main()
{
	int len;
	int i,left = 0 ,right = 0;
	char str[102],b[102];
    while (cin.getline(str,102))
	{
		len = strlen(str);
		left = 0;
		right = 0;
		for (i = 0 ; str[i] != '\0'; i++)
		{
			b[i] = ' ';
			if (str[i] == '(')
				left++;
			if (str[i] == ')')
			{
				if (left <= 0)
					b[i] = '?';
				else
					left--;
			}
		}
        for (i = len - 1 ;i >= 0; i--)
		{
			if (str[i] == ')')
				right++;
			if (str[i] == '(')
			{
				if (right <= 0)
					b[i] = '$';
				else
					right--;
			}
		}
		for (i = 0 ;i < len; i++)
			cout << str[i];
		cout << endl;
		for (i = 0 ;i < len; i++)
			cout << b[i];
		cout << endl;
	}
	return 0;
}
			