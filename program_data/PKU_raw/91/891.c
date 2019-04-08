int main()
{
	char str[101];
	char *p = str;
	cin.getline(str, sizeof(str));
	char str_new[101];
	char *q = str_new; 
	int length;
	length = strlen(str);
	for(p = str, q = str_new; p <= str + length - 1; p++, q++)
		*q = *p + *(p + 1);
	*(str_new + length - 1) = *(str + length - 1) + *str;
	*(str_new + length) = '\0';
	cout << str_new << endl;
	return 0;
}
