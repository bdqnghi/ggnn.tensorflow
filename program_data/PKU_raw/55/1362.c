void shuchu(int c[], int i)
{
	int j;
	for(j = i - 1 ; j >= 0 ; j--)
	{
		if(c[j] >= 0 && c[j] <= 9)
		{
			cout << c[j];
		}
		if(c[j] >= 10)
		{
			cout << (char)(c[j] + 55);
		}
	}
	cout << endl;
}
int main()
{
	char str1[10000], str2[10000], l;
	int i, j, num[10000] = {0}, sum = 0, c[10000] = {0}, nlen, k;
	double  before , after;
	memset(str1, ' ', sizeof(str1));
	memset(str2, ' ', sizeof(str2));
	cin >> before;
	cin >> str1;
	cin >> after;
	nlen = strlen(str1);
	for(i = 0 ; i < nlen ; i++)
	{
		if(str1[i] >= 97 && str1[i] < 122)
		{
			str1[i] = (char)toupper(str1[i]);
		}
		if(str1[i] >= 65 && str1[i] <= 90)
		{
			num[i] = str1[i] - '7';
		}
		else
			num[i] = str1[i] - '0';
	}
	k = nlen - 1;
	for(i = 0 ; i < nlen ; i++)
	{

		sum = sum + num[i] * pow(before, k);
		k--;
	}
	i = 0;
	do
	{
		c[i] = sum % (int)after;
	
		sum = sum / after;
		i++;
	}while(sum > 0);
	shuchu(c, i);
	
	return 0;
}
