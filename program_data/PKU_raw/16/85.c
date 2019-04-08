//??????
//2010?11?26?
//1000012753 ???
int main()
{
	char str1[100], str2[100];
	int i, j, l;
	cin >> str1;
	l = strlen(str1);
	j = 0;
	for (i = l - 1; i >= 0; --i)
		str2[j++] = str1[i];
	str2[j] = '\0';
	cout << str2 << endl;
	return 0;
}