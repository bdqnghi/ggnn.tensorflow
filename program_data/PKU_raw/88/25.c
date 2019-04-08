int main()
{
	char temp[31];
	char str[31];
	int k = 0, num = 0, k10;
	cin.getline(str, 31);
	for(int i = 0; i < sizeof(str); i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			temp[k] = str[i];
			k++;
		}
		else 
			if(str[i-1] >= '0' && str[i-1] <= '9')
			{
				k10 = 1;
				for(int j = k - 1; j >= 0; j--)
				{
					num += (temp[j] - '0') * k10;
					k10 *= 10;
				}
				cout << num << endl;
				k = 0;
				num = 0;
			}
	}
	cin.get();
	cin.get();
	return 0;
}

