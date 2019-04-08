//*****************************************
//** ???Dec 11, 2013 - n-gram???? **
//** ?????? 1300012719             **
//** ???2013.12.14                    **
//*****************************************
int main()
{
	char c[501][5], str[501], temp[5];                       //c????????n????,str???????,temp????str????n????
	int freq[501], maxfreq = 1, i, j, n, len, cnt = 0;            //freq??????????????,maxfreq?????,flag?????????????,cnt??????????????
    memset(c,'\0',2505);
	memset(str,'\0',501);
	cin >> n;                                                //??????????,???????????,???freq
	cin.get();
	cin.getline(str,501);
	len = strlen(str);
	memset(freq,0,501);
	for (i = 0; i <= strlen(str) - n; i++)
	{
		for (j = 0; j < n; j++)
			*(*(c + i) + j) = *(str + i + j);
		*(*(c + i) + j) = '\0';
		*(freq + i) = 1;
	}
	for (i = 0; i < len - n; i++)
	{
		if (*(freq + i))
		{
			for (j = i + 1; j <= len - n; j++)
			{
				if (strncmp(*(c + i),*(c + j),n) == 0)
				{
					*(freq + i) = *(freq + i) + 1;
					*(freq + j) = 0;
				}
			}
		}
	}
	for (i = 0; i < len - n; i++)
	{
		if (maxfreq < *(freq + i))
			maxfreq = *(freq + i);
	}
	if (maxfreq == 1)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << maxfreq << endl;
	for (i = 0; i < len - n; i++)
	{
		if (*(freq + i) == maxfreq)
			cout << *(c + i) << endl;
	}
	return 0;
}