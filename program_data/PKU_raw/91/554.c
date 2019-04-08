 //******************************//
 //*     ?????				*//
 //*     ???1000012711		*//
 //*     ??????????	*//
 //*     ???2010.12.15		*//
 //******************************//
int main()
{
	int i, l;
	char str[101], temp;
	cin.getline(str,101);
	l = strlen(str);
	temp = str[0];
	for (i = 0; i < l; i++)
	{
		if (i == l - 1)
		{
			str[i] += temp;
			continue;
		}
		str[i] += str[i + 1];
	}
	cout << str << endl;
	return 0;
}