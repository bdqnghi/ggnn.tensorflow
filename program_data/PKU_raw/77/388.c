void qianshou(int a[], int len)
{
	int i,j, flag = 0;
	for(i = 1; i < len; i++)
	{
		if(a[i] == 2)
		{
			for(j = i - 1; j >= 0 ; j--)
			{
				if(a[j] == 1)
				{
					cout << j << " " << i << endl;
			        a[j] = 0;
					a[i] = 0;
				    break;
				}
			}
		}
	}

}
int main()
{
	char str[100];
	int a[100];
	int i = 0;
	cin.getline(str,100);
	int len;
	len = strlen(str);
	for(i = 0; i < len; i++)
	{
		if(str[0] - '0' == str[i] - '0')
			a[i] = 1;
		else
			a[i] = 2;
	}
	qianshou(a, len);
	return 0;
}

