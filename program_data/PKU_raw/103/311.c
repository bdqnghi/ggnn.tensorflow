int main ()
{
	int i, flag = 1, j;
	unsigned long len;
	char am[100];
	cin.getline(am,100);
	len = strlen(am);
	for (i = 0; i < len; i++)
	{
		if (am[i] >= 'a' )
			am[i] = am[i] - 32;
	}
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (am[j] == am[i] || fabs(am[j] - am[i]) == 32)
			{
				flag++;
			}
			else 
				break;
		}
		
		cout <<"("<<am[i]<<","<<flag<<")";
		flag = 1;
		i = j - 1;

	}



	return 0;
}