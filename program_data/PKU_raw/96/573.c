
int main()
{
	int i_shu[100] = {0}, shang[100] = {0};
	int i, len, yu = 0, k = 0;
	char c_shu[100];
	gets(c_shu);
	len = strlen(c_shu);

	for (i = 0; i < len; i++)
		i_shu[i] = c_shu[i] - '0';

	for (i = 0; i < len; i++)
	{
		yu = yu * 10 + i_shu[i];
		shang[i] = yu / 13;
		yu = yu % 13;
	}
	
	if (len <= 2)
		cout << shang[1];
	else
	{
		for (i = 0; shang[i] == 0; i++)
			k++;
		for (i = k; i < len; i++)
			cout << shang[i];
	}
	cout << endl << yu << endl;
	return 0;
}