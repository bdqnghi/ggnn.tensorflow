
int main()
{
	char str[200], str1[50], str2[50];
	char *p, *q;
	int length, i;
	cin.getline(str, 200);
	cin >> str1 >> str2;
	length = strlen(str1);
	q = str;
	p = strstr(str, str1);
	if (p != NULL)
	{
		q = p + length;
		for (i = 0; &str[i] != p; i++)
			cout << str[i];
		cout << str2 ;
		for (; *q != '\0'; q++)
			cout << *q;
		cout << endl;
	}
	else
		cout << str << endl;
	return 0;
}