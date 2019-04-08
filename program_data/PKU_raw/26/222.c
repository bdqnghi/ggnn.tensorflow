 //******************************//
 //*     ?????				*//
 //*     ???1000012711		*//
 //*     ??????????	*//
 //*     ???2010.12.08		*//
 //******************************//
int main()
{
	char str[101], *pointer = str, l, g;
	gets(str);
	l = strlen(str);
	g = 1;
	for (; pointer < str + l; pointer++)
	{
		if (g == 1 && *pointer == ' ')
		{
			g = 0;
			cout << *pointer;
		}
		if (g == 0 && *pointer == ' ')
			continue;
		cout << *pointer;
		if (*pointer != ' ')
			g = 1;
	}
	cout << endl;
	return 0;
}
