/*
 *??????????.cpp
 *?????
 *????: 2012-12-4
 *??????????????????
 */


char c[110], ch;

void PMP(char c[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << c[i];
	}
	cout << endl;
	int flag = 1;

	while (flag)
	{
		flag = 0;
		for (int i = 0; i < len; i++)
		{
			if ((c[i] != '(' ) && (c[i] != ')'))
				c[i] = ' ';
			else if (c[i] == '(')
			{
				for (int j = i + 1; j < len; j++)
				{
					if (c[j] == '(')
						break;
					if (c[j] == ')')
					{
						c[i] = ' ';
						c[j] = ' ';
						flag = 1;
						break;
					}
					else if (j == len - 1)
					{
						c[i] = '$';
					}

				}
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (c[i] == '(')
			c[i] = '$';
		if (c[i] == ')')
			c[i] = '?';
	}

	for (int i = 0; i < len; i++)
		cout << c[i];
	cout << endl;
	return;
}


int main(){
	int len;
	ch = getchar();
	while(ch!='~')
	{
		len = 0;
		while (ch != '\n')
		{
			c[len] = ch;
			len++;
			ch = getchar();
		}
		PMP(c, len);
		ch = getchar();
	}
	return 0;
}
