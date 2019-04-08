int main()
{
	char str1[251], str2[251];
	int i = 0, j = 0, len1, len2, a[251], b[251], c[251], pos = 0;
	memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
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
		if(a[i] + b[i] >= 10)  
		{
			c[i] = a[i] + b[i] - 10;
			b[i+1] = b[i+1] + 1;
			c[i+1] = 1;
		}
		else c[i] = a[i] + b[i];
	}
	for(i = 250; i >= 0;i--)
		if(c[i] != 0)
		{
			pos = i;
			break;
		}
	for(i = pos;i >= 0;i--)
		cout << c[i];
	return 0;
}
