//  **********************************
//  ****  ?????.cpp  ****
//  ****  Author ???           ****
//  ****  ID  1000012895          ****
//  ****  Date 2010 / 11 / 24     ****
//  **********************************
int main()
{
	int i, j, cou, sum = 1, max = 0, sub;
	int num[1000];
	char stra[99999], strb[99999];
	int a[5000], b[5000];
	cin.getline(stra, 99999);
	cin.getline(strb, 99999);
	for(cou = 0; strb[cou] != '\0'; cou++)
		if(strb[cou] == ',')
			sum++;
	i = 0; j = 0;
	for(sub = 0; sub <= cou; sub++)
	{
		if(stra[sub] == ',' || stra[sub] == '\0')
		{
			a[i] = (stra[sub - 1] - '0') * 1;
			if(stra[sub-2] != ',' && sub - 2 >= 0)
			{
				a[i] += (stra[sub - 2] - '0') * 10;
				if(stra[sub-3] != ',' && sub - 3 >= 0)
				{
					a[i] += (stra[sub - 3] - '0') * 100;
					if(stra[sub-4] != ',' && sub - 4 >= 0)
						a[i] += (stra[sub - 4] - '0') * 1000;
			}}
			i++;
		}
		if(strb[sub] == ',' || strb[sub] == '\0')
		{
			b[j] = (strb[sub - 1] - '0') * 1;
			if(strb[sub-2] != ',' && sub - 2 >= 0)
			{
				b[j] += (strb[sub - 2] - '0') * 10;
				if(strb[sub-3] != ',' && sub - 3 >= 0)
				{
					b[j] += (strb[sub - 3] - '0') * 100;
					if(strb[sub-4] != ',' && sub - 4 >= 0)
						b[j] += (strb[sub - 4] - '0') * 1000;
			}}
			j++;			
		}
	}
	for(j = 0; j < 1000; j++)
	{
		num[j] = 0;
		for(i = 0; i < sum; i++)
			if(a[i] <= j && b[i] > j)
				num[j]++;
		if(num[j] > max)
			max = num[j];
	}
	cout << sum << ' ' << max << endl;
	return 0;
}