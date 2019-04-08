/*	???:???????
	???:1000012896 leo
	??:2010.12.13
	????:???????
	*/
int main()
{
	char str[101];
	int flag = 1;
	cin.getline (str, 100);
	char * p, * q;
	for (p = str + 1; p <= str + strlen(str) - 2;)
	{
		if (* p == ' ' && flag == 0)
		{
			for (q = p; q <= str + strlen(str) - 1; q++)
				* q = * (q + 1);
			continue;
		}
		if ( * p == ' ')
			flag = 0;
		else 
			flag = 1;
		p++;
	}
	cout << str;
	return 0;
}
		