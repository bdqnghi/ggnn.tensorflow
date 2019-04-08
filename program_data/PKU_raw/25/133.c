/*
 *?????
 *???2010 - 12 - 20
 *?????????  ??2?N??
 */
void power(char str[35],int);
int g_count = 0;                            //??????????2?????N??????
int main()
{
	char str[35];
	int i,n,j;
	cin >> n;
	for(i = 0; i <= 34; i++)               //?????????2??????00000000……1
		str[i] = '0';
	str[34] = '1';
	power(str,n);
	return 0;
}
void power(char str[35],int n)
{
	int i,j;
	if(g_count == n)
	{
		for(i = 0; i <= 34; i++)
			if(str[i] != '0')                  //???????????????????
			{
				for(j = i; j <= 34; j++)
					cout << str[j];
				return;
			}
	}
	char line[35];
	for(i = 0; i <= 34; i++)
		line[i] = '0';
	for(i = 34; i >= 0; i--)
	{
		if((str[i] - '0') * 2 > 9)
		{
			line[i - 1]++;
			line[i] += (str[i] - '0') * 2 - 10;
		}
		if(((str[i] - '0') * 2 < 9)&&(str[i] < '9'))
			line[i] += (str[i] - '0') * 2;
	}
	g_count++;
	power(line,n);
}