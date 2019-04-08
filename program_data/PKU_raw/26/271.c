int main()
{
	char *se, a[100], n, i;
	cin.getline(a, 100);
    se = a;
	n = strlen(a);
	for(i = 0; *(se + i) != '\0'; i ++)
	{
		if(*(se + i - 1)== ' ' && *(se + i)== ' ')
		{
			strcpy(se + i, se + i + 1);
			i--;
		}
	}
	cout << se << endl;
	return 0;
}