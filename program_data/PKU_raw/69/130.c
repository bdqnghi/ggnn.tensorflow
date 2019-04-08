int main()
{
	char str1[251], str2[251];
	int i = 0, j = 0, len1, len2, a[251], b[251], c[251], pos = 0;
	memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
//    memset(c,0,sizeof(c));
	cin >> str1 >> str2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(i = len1 - 1;i >= 0;i--)
		a[j++] = str1[i] - '0';
	j = 0;
	for(i = len2 - 1;i >= 0;i--)
		b[j++] = str2[i] - '0';
	for(i = 0;i < len1 || i < len2;i++)
	{
		a[i] = a[i] + b[i];
		if(a[i] >= 10)
		{
			a[i] = a[i] - 10;
			a[i+1] = a[i+1] + 1;
		}
	}
	for(i = 250; i >= 0;i--)
		if(a[i] != 0)
		{
			pos = i;
			break;
		}
	for(i = pos;i >= 0;i--)
		cout << a[i];
	return 0;
}
