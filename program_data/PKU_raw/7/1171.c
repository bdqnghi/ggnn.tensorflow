/*******************************
/* ?  ?: ????
/* ?  ?: ??? 1200012861
/* ?  ?: 2012?12?24?
*******************************/


int main()
{
	char str[260], subStr[260], replace[260];
	char *start = str, *node = NULL, *rep = replace;
	int len;
	cin >> str >> subStr >> replace;
	node = strstr(str, subStr);
	if (node == NULL)
		while (*start != '\0')
			cout << *start++;
	else
	{
		len = strlen(subStr);
		while (start != node)
			cout << *start++;
		while (*rep != '\0')
			cout << *rep++;
		node += len;
		while (*node != '\0')
			cout << *node++;
	}
	cout << endl;
	start = NULL;
	node = NULL;
	rep = NULL;
	return 0;
}