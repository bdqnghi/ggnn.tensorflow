//?????
//2010?11?13?
//1000012753 ???

int main()
{
	char str1[100], str2[100];
	int i, l1, l2;
	cin.getline(str1,100);
	cin.getline(str2,100);
	l1 = strlen(str1);
	l2 = strlen(str2);
	for (i = 0; i < l1; i++)
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
			str1[i] += 32;
	}
	for (i = 0; i < l2; i++)
	{
		if (str2[i] >= 'A' && str2[i] <= 'Z')
			str2[i] += 32;
	}
	if (strcmp(str1, str2) == 1)
		cout << ">" << endl;
	else if (strcmp(str1, str2) == -1)
		cout << "<" << endl;
	else 
		cout << "=" << endl;
	return 0;
}