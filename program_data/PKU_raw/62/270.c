int main()
{
	char str[10000], count[10000], store[10000];;
	memset(count, 0, sizeof(count));
	int i = 0;
	while ((str[i] = cin.get()) != '\n')
	{
	   // ?????????????str[0]????
	   if ((str[i] != 32) || ((str[i] == 32) && (str[i - 1] != 32)))
	   {
		   store[i] = str[i];
		   count[i]++;
		   i++;
	   }
	   if ((str[i] == 32) && (str[i - 1] == 32))
	   {
		   count[i] = 2;
		   i++;
	   }
	} 
	i = 0;
	while (count[i] > 0)
	{
		if (count[i] == 1)
		{
			cout << str[i];
		}
        i++;
	}
	return 0;
}

