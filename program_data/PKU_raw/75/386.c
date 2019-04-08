int power(int,int);
int main()
{
	int i,j,k,h,g,len1,len2,x[1002] = {0},y[1002] = {0},num[1000] = {0},max,pos;
	char ch1[10000],ch2[10000];
	cin >> ch1 >> ch2;
	len1 = strlen(ch1);
	len2 = strlen(ch2);
	k = 0;
	for(i = 0; i <= len1; i++)
	{
		if((ch1[i] == ',')||(ch1[i] == '\0'))
		{
			g = 0;
			for(j = i - 1; j >= 0; j--)
			{
				if(ch1[j] != ',')
				{
					x[k] = x[k] + (ch1[j] - '0') * power(10,g);
					g++;
				}
				if(ch1[j] == ',')
					break;
			}
			k++;
		}
	}
	k = 0;
	for(i = 0; i <= len2; i++)
	{
		if((ch2[i] == ',')||(ch2[i] == '\0'))
		{
			g = 0;
			for(j = i - 1; j >= 0; j--)
			{
				if(ch2[j] != ',')
				{
					y[k] = y[k] + (ch2[j] - '0') * power(10,g);
					g++;
				}
				if(ch2[j] == ',')
					break;
			}
			k++;
		}
	}
	for(i = 1; i < 1000; i++)
	{
		for(j = 0; j < k; j++)
		{
			if((x[j] <= i)&&(i < y[j]))
				num[i]++;
		}
	}
	max = 0;
	for(i = 1; i < 1000; i++)
	{
		if(num[i] > max)
		{
			max = num[i];
			pos = i;
		}
	}
	cout << k << " " << max;
	return 0;
}
int power(int a,int b)
{
	int sum = 1,i;
	for(i = 1; i <= b; i++)
		sum = sum * a;
	return sum;
}