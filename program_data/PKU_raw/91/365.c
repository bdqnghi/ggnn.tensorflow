int main()
{
	char ori[101];
	char rel[101];
	gets(ori);
	int i;
	for (i = 0; i < strlen(ori)-1; i++)
	{
		rel[i] = ori[i] + ori[i+1];
		cout << rel[i];
	}
	rel[strlen(ori)-1] = ori[0] + ori[strlen(ori)-1];
	cout << rel[strlen(ori)-1];
	return 0;
}