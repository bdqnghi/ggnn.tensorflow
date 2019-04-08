int a[maxx];
int b[maxx];
int c[maxx];
char temp[maxx];
int main()
{
	int n;
	int mm;
	memset(c,0,sizeof(c));
	cin.getline(temp,251);
	a[0] = strlen(temp);
	for(int i = a[0]; i >= 1; --i)
	{
		a[a[0] - i + 1] = temp[i-1] - '0';
	}
	while(a[a[0]] == 0 && a[0] > 1)
	{
		a[0]--;
	}
	cin.getline(temp,251);
	b[0] = strlen(temp);
	for(int i = b[0]; i >= 1; --i)
	{
		b[b[0] - i + 1] = temp[i-1] - '0';
	}
	while(b[b[0]] == 0 && b[0]>1)
	{
		b[0]--;
	}
	int len = max(a[0],b[0]);
	int temp = 0;
	int tempsum;
	for(int i = 1; i <= len; ++i)
	{
		tempsum = a[i] + b[i] + temp;
		c[i] = (tempsum)%10;
		if(tempsum >= 10)
		{
			temp = 1;
		}
		else
		{
			temp = 0;
		}
	}
	if(temp == 1)
	{
		c[len + 1]  += 1;
		len = len + 1;
	}

	for(int i = len; i>=1; --i)
	{
		cout << c[i];
	}

	return 0;
}