int main()
{
	char c[110], ch[110];
	cin.getline(c,110);
	int len = strlen(c);
	for (int i = 0; i < len - 1; i++)
		ch[i] = c[i] + c[i + 1];
	ch[len - 1] = c[len - 1] + c[0];
	for (int j = 0; j < len; j++)
		cout << ch[j];
	cout << endl;
	return 0;
}