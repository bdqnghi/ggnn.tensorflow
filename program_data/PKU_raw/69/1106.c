int max(int a,int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	int a[100000] ={0}, b[100000] = {0};
	char s1[100000], s2[1000000];
	
	scanf("%s%s",s1,s2);
	
	int len1 = 0, len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	//????????
	int j = 0;
	for (int i = len1 - 1; i >= 0; i--, j++)
		a[j] = s1[i] - '0';//?s1????????a?????????????????
	
	j = 0;
	for (int i = len2 - 1; i >= 0; i--, j++)
		b[j] = s2[i] - '0';
	
	int m = max(len1, len2);
	for (int i = 0; i < m; i++)
	{
		a[i] = a[i] + b[i];
		if (a[i] >= 10)
		{
			a[i] %= 10;
			a[i+1]++;
		}
	}
	int tag = 0;//????0?
	for (int i = m; i >= 0; i--)
	{
		if (a[i] != 0)
			tag = 1;
		if (tag == 1)
		{
			printf("%d",a[i]);
		}
		if (tag == 0 && i == 0)
			printf("0");
	}
	printf("\n");
	return 0;
}
