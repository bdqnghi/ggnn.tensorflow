//2013.11.17
//zwb

int main ()
{
	int n, i, j, k, flag = 0;
	float t;
	float hm[41] = {0}, hf[41] = {0};
	char sex[7];

	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
		cin >> sex;
		if(sex[0] == 'm')
			cin >> hm[i];
		if(sex[0] == 'f')
			cin >> hf[i];
	}
	
	for(j = 1; j <= 40; j++)
	{
		for(k = 1; k <= 40; k++)
		{
			if(hm[k] > hm[k+1])
			{
				t = hm[k];
				hm[k] = hm[k+1];
				hm[k+1] = t;
			}
		}
	}

	for(j = 0; j < 40; j++)
	{
		for(k = 0; k < 40 - j; k++)
		{
			if(hf[k] < hf[k+1])
			{
				t = hf[k];
				hf[k] = hf[k+1];
				hf[k+1] = t;
			}
		}
	}

	for(j = 0; j <= 40; j++)
	{
		if(hm[j] != 0 && flag != 0)
		{
			cout << fixed;
			cout << setprecision(2) << " " << hm[j];
		}
		if(hm[j] != 0 && flag == 0)
		{
			flag = 1;
			cout << fixed;
			cout << setprecision(2) << hm[j];
		}
	}

	for(j = 0; j <= 40; j++)
	{
		if(hf[j] != 0)
		{
			cout << fixed;
			cout << setprecision(2) << " " << hf[j];
		}
	}

	cout << endl;

	return 0;
}


