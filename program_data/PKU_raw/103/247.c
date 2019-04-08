int main()
{
	char str[1002] = {'\0'};
	int counts = 1;
	for (int i = 0; str[i - 1] != '\n'; i ++)
	{
		str[i] = getchar();
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	for (int i = 0; str[i] != '\n'; i ++)
	{
		if (str[i] == str[i+1])
			counts ++;
		else
		{
			cout << "(" << str[i] << ',' << counts << ')';
			counts = 1;
		}
	}
	return 0;
}