int main()
{
	char str[200];
	char trans[200] = {0};
	int len;
	cin.getline(str, 200);
	len = strlen(str);

	for (int i = 0; i < len - 1;i++)
	{
		trans[i] = str[i] + str[i+1];
	}

	trans[len - 1] = str[len - 1] + str[0];
	cout << trans;
	return 0;
}