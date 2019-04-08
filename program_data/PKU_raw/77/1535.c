int sum1 = 0, sum2 = 0;
void cal(char a[], int k, char ch)
{
	int i,j;
	int longth = strlen(a);
	for(i = k;;i++)
	{
		if(a[i] != ch && a[i] != '0')
		{
			a[i] = '0';
			for(j = i - 1; ; j--)
			{
				if(a[j] == ch && a[j] != '0')
				{
					a[j] = '0';
					cout << j << ' ' << i << endl;
					break;
				}
			}
			break;
		}
	}
	if(i == longth - 1)
	return;
	else cal(a,i+1,ch);
}
int main()
{
	char a[200];
	cin >> a;
	char ch = a[0];
	cal(a, 0, ch);
	return 0;
}
