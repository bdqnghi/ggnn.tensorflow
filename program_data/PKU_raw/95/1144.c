
int main()
{
	char str1[1000];
	char str2[1000];
	gets(str1);
	gets(str2);
	for(int i = 0; i < strlen(str1); i++)
	{
		if((str1[i] <= 'Z') && (str1[i] >= 'A'))
		{
			str1[i] = str1[i] - ('A' - 'a');
		}
	}
	for(int i = 0; i < strlen(str2); i++)
	{
		if ((str2[i] <= 'Z') && (str2[i] >= 'A'))
		{
			str2[i] = str2[i] - ('A' - 'a');
		}
	}

	//cout << str1 << endl << str2 << endl;
	int i = strcmp(str1,str2);
	//cout << i << endl;
	if (i == 0) 
		cout << '=';
	else 
		if (i > 0) 
			cout << '>';
		else 
			cout << '<';
}	