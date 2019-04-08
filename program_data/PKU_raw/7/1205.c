//********************************
//*???????               **
//*??????                 **
//*???2012.12.26             **
//*******************************/


int main ()
{
	char str[256], subStr[256], repStr[256];
	int strLen, subStrLen, repStrLen, i, j, k, flag2 = 0;
	cin.getline(str, 256, '\n');
	cin.getline(subStr, 256, '\n');
	cin.getline(repStr, 256, '\n');
	subStrLen = strlen(subStr);
	repStrLen = strlen(repStr);
	strLen = strlen(str);
	for (i = 0; i < strLen && flag2 == 0; i++)
		if (str[i] == subStr[0])
		{
			int flag1 = 0;
			for (j = 1; j < subStrLen; j++)
				if (str[i + j] != subStr[j])
					flag1 = 1;
			if (flag1 == 0)
			{
				if (subStrLen > repStrLen)
				{
					for (j = 0; j < repStrLen; j++)
						str[i + j] = repStr[j];
					for (j = i + subStrLen; j < strLen; j++)
						str[j - (subStrLen - repStrLen)] = str[j];
				}
				else if (subStrLen == repStrLen)
					for (j = 0; j < repStrLen; j++)
						str[i + j] = repStr[j];
				else
				{
					for (j = strLen - 1; j >= i + subStrLen; j--)
						str[j - (subStrLen - repStrLen)] = str[j];
					for (j = 0; j < repStrLen; j++)
						str[i + j] = repStr[j];
				}
				flag2 = 1;
			}
		}
	if (flag2 == 1)
		for (i = 0; i < strLen - subStrLen + repStrLen; i++)
			cout << str[i];
	else 
		for (i = 0; i < strLen; i++)
			cout << str[i];
	return 0;
}
