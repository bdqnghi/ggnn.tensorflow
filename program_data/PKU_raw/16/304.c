int main()
{
	char c, i = 0;
	char num[7] = {0};
	while((c = cin.get()) != '\n')
	{
		num[i ++] = c;
	}
	for (i = i - 1;i >= 0; i --)
		cout << num[i];
	cout << endl;
	return 0;
}