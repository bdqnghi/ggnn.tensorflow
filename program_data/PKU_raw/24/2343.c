//
// ????1.cpp
// ?????????
// ?????? 1200012943
// ??:2012.12.26
//
int main()
{
	int len1 = 0, len2 = 50, len = 0;
	char str[2000], w1[50], w2[50];
	cin.getline(str, 2000);
	int i, j = 0, k;
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] != ' ' && str[i] != ',')
			len++;
		else
		{
			if(len > len1)
			{
				len1 = len;
				int m = 0;
				for(k = j; k < i; k++)
					w1[m++] = str[k];
				w1[m] = '\0';
			}
			if(len < len2)
			{
				len2 = len;
				int n = 0;
				for(k = j; k < i; k++)
					w2[n++] = str[k];
				w2[n] = '\0';
			}
			len = 0;
			if(str[i] == ',')
				i++;
			j = i + 1;
		}
	}
	if(len > len1)			
	{
		int m = 0;
		for(k = j; k < i; k++)
			w1[m++] = str[k];
		w1[m] = '\0';
	}
	if(len > 0 && len < len2)
	{
		int n = 0;
		for(k = j; k < i; k++)
			w2[n++] = str[k];
		w2[n] = '\0';
	}
	cout << w1 << endl;
	cout << w2 << endl;
	return 0;
}
