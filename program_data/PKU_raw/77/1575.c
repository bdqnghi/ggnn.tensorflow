int main() 
{
	int a[111],i, n = 0;;
	char s[111];
	cin >> s;
	char boy=s[0];
	for (i = 0; s[i]; ++i)
		if (s[i] == boy) a[++n] = i;
		else cout << a[n--] << " " << i << endl;
	return 0;
}