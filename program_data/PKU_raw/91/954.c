int main()
{
	char str[101], *p_str, temp;
	cin.getline(str,101);
	temp = str[0];
	p_str = str;
	while (*(p_str + 1)!= '\0')
	{
		*p_str = *p_str + *(p_str + 1);
		p_str++;
	}
	*p_str = *p_str + temp;
	cout << str;
	return 0;
}

	