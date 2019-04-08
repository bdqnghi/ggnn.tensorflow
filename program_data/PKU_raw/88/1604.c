/**
* @file 1000012907_3.cpp
* @author ???
* @date 2010?12?11
* @description
* ??????: ???? 
*/
int main() 
{
	char str[31];
	int len, i, flag;
	char *p = str;
	gets(str);
	len = strlen(str);
	for (p = str; p < str + len; p++)
	{
		if (*p - '0' >= 0 && *p - '0' <= 9)
		{
			cout << *p;
			flag = 0;
		}
		else if (flag == 0)
		{
			cout << endl;
			flag = 1;
		}
	}
	return 0;
}