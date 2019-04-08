int main()
{
	char str1[100], str2[100];
	int i;
	cin.getline (str1, 100);
	cin.getline (str2, 100);
	for (i = 0; ; i++)
	{
		if (str1[i] == '\0')
			break;
		if (str1[i] >= 'a')
			str1[i] = str1[i] - 32;
	}
	for (i = 0; ; i++)
	{
		if (str2[i] == '\0')
			break;
		if (str2[i] >= 'a')
			str2[i] = str2[i] - 32;
	}
	if (strcmp(str1, str2) == 0) 
		cout << '=' << endl;
	if (strcmp(str1, str2) == -1) 
		cout << '<' << endl;
	if (strcmp(str1, str2) == 1) 
		cout << '>' << endl;
	return 0;
}