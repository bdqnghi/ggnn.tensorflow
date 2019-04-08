int main ()
{
	char str[257] = {'\0'}, substr[257] = {'\0'}, replace[257] = {'\0'};
	cin >> str >> substr >> replace;
	char * p = strstr(str, substr);
	int i = 0, flag = strlen(substr);
	if(p == NULL)
		cout << str << endl;
	else
	{
		for(i = 0; str + i < p; i ++)
		    cout << str[i];
		cout << replace;
		for(i = i + flag; i < strlen(str); i ++)
			cout << str[i];
	}
	return 0;
}