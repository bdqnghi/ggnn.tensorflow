
int main()
{
	char s[300], rep[300], sub[300];
	cin >> s >> sub >> rep;
	if (strstr(s, sub))
	{
		char * t = strstr(s, sub);
		*t = '\0';
		cout << s << rep << (t + strlen(sub)) << endl;
	}
	else
	{
		cout << s << endl;
	}
	return 0;
} 