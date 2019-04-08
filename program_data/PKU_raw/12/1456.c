int main()
{
	int num[15], i, j, k, t, N;
	for(i=1 ; ; i++)
	{
		cin >> num[0];
		if(num[0] == -1)
			break;
		N=0;
		for(j=1; ; j++)
		{
			cin >> num[j];
			if(num[j] == 0)
				break;
		}
		for(k=0; k<=j-1; k++)
		{
			for(t=0; t<=j-1; t++)
			{
				if(num[k] == 2*num[t])
					N++;
			}
		}
		cout << N << endl;
		
	}
	
	return 0;
}