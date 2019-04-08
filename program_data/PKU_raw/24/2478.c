int main()
{
	int min = INT_MAX;
	int max = 0;
	char str[100000] = {0};
	cin.getline(str,100000);
	
	char* minstart;
	char* minend;
	char* maxstart;
	char* maxend;
	int temp = 0;;
	char* p = str;
	for (;*p; p++)
	{
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
			temp ++;
		else
		{
			if (temp > 0)
			{
				if (temp < min)
				{
					minstart = p - temp;
					minend = p - 1;
					min = temp;
				}
				if (temp > max)
				{
					maxstart = p - temp;
					maxend = p - 1;
					max = temp;
				}
				temp = 0;
			}
		}
	}
	if (temp > 0)
	{
		if (temp < min)
		{
			minstart = p - temp;
			minend = p - 1;
			min = temp;
		}
		if (temp > max)
		{
			maxstart = p - temp;
			maxend = p - 1;
			max = temp;
		}
	}
	for (;maxstart <= maxend; maxstart++)
		cout << *maxstart;
	cout << endl;
	for (;minstart <= minend; minstart++)
		cout << *minstart;
}

