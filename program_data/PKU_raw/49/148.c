
/*
 * file    homework 9_5
 * author  ??
 * date    2010-11-24
 * description
           ???????????????????
*/



int isHuiwen(char hw[])
{
	int len, i;
	len = strlen(hw);
	for (i = 0; i <= (len - 1) / 2; i ++)
		if (hw[i] != hw[len - 1 - i])
			break;
	if (i > (len - 1) / 2)
		return 1;
	else 
		return 0;
}

int main()
{
	char str[501], hw[501];
	int i, j, len;
	cin >> str;
	len = strlen(str);
	for (i = 2; i <= len; i ++)                           // i????????
		for (j = 0; j <= len - i; j ++)
		{
			strncpy(hw, str + j, i);
			hw[i] = '\0';
			if (isHuiwen(hw))
				cout << hw << endl;
		}

	return 0;
}

