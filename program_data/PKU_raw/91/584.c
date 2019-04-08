int main ()
{
	char str[10000];
	cin.get(str, 10000);
	int len = strlen(str);
	char temp = str[0];
	int i;
	for (i = 0; i < len - 1; i++)
	{
		str[i] = str[i] + str[i + 1];
	}
	str[i] = temp + str[i];
	str[i + 1] = '\0';
	cout << str << endl;
	return 0;
}
