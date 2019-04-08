
int main()
{
	char s[101], s1[101], *p = NULL, *q = NULL;
	cin.getline(s, 101);
	for (p = s, q = s1; p < s +strlen(s) - 1; p++, q++)
		*q = *p + *(p + 1);
	*q = *p + s[0];
	for (int i = 0; i <= strlen(s) - 1; i++)
		cout << s1[i];
//	cout << s1 << endl;
	return 0;
}