int main ()
{
	int in[1000], out[1000], time[1000] = {0}, count = 0, max = 0, i, j;
	char sign;
	for (count = 0; ; count++)
	{
		cin >> in[count];
		cin.get(sign);
		if (sign != ',')
			break;
		
	}
	for (i = 0; i <= count; i++)
	{
		cin >> out[i];
		cin.get(sign);
		for (j = in[i]; j < out[i]; j++)
		{
			time[j]++;
		}
	}
	for (i = 0; i <= 999; i++)
	{
		if (time[i] > max)
		{
			max = time[i];
		}
	}
	cout << count + 1<< " ";
	cout << max << endl;
	return 0;
}