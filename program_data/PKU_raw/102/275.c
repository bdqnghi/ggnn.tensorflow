int main()
{
	int k, i, j = 0,h =0, m,flag = 0;
	char n[40][7];
	float s[40], a[40], b[40], temp;
	cin >> k;
	for (i = 0; i < k; i++)
	{
		cin >> n[i] >> s[i];
	}
	for (i = 0 ; i < k; i++)
	{
		if(n[i][0] == 'm')
		{
			a[j] = s[i]; j++; 
		}
		else
		{b[h] = s[i];h++;}
	}
	for (i = 0; i < j - 1; i++)
		for (m = 0; m < j - i - 1; m++)
		{
			if (a[m] > a[m + 1])
			{
				temp = a[m + 1]; a[m + 1] = a[m]; a[m] = temp; 
			}
		}
	for (i = 0; i < h - 1; i++)
		for (m = 0; m < h - i - 1; m++)
		{
			if (b[m] < b[m + 1])
			{
				temp = b[m + 1]; b[m + 1] = b[m]; b[m] = temp;
			}
		}
    cout << fixed;
	for (i = 0; i < j; i++)
	{   if (flag)
		cout <<" "<< setprecision(2) << a[i];
	    else
		{cout << setprecision(2) << a[i]; flag = 1;}
	}
	for (i = 0; i < h; i++)
		cout <<" "<<setprecision(2) << b[i];
	return 0;
}