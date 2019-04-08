int main()
{
	int i = 0, j = 0;
    char s[101], s1[101];
	cin.getline(s, 101);
	while(s[i + 1] != '\0')
	{
		s1[j++] = s[i] + s[i + 1];
		i++;
	}
	s1[j++] = s[i] + s[0];
	s1[j] = '\0';
	cout << s1 << endl;
    return 0;
}
