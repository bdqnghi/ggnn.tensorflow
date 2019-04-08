//****************************
//?????? 1200012896*****
//???2013/1/4         *****
//???????         *****
//****************************
int main()
{
	int len, len1, flag = 0, i, j, k;
	char str[256], str1[256], str2[256];
	cin >> str;
	cin >> str1;
	cin >> str2;
	len = strlen(str);
	len1 = strlen(str1);
	for (i = 0; i <= len - len1; i++) //??????????len-len1???
	{
		for (j = 0; j <= len1 - 1; j++) //????????????
		{
			if (str[i + j] == str1[j])
				continue;
			else
				break;
		}
		if (j == len1) //????????????????????????????
		{
			for (k = 0; k < i; k++)
				cout << str[k];
			cout << str2;
			for (k = i + j; k < len; k++)
				cout << str[k];
			flag = 1;
			break;
		}
	}
	if (flag == 0) //?????????
		cout << str;
	return 0;
}