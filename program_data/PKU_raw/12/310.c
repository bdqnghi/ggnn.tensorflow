int main()
{
	int i, a[16];
	while(1)
	{
		for( i = 0;;i++)
		{
			cin >> a[i];
			if(a[i] == 0) 
				break;
			if(a[i] == -1)
				goto end;
		}
		int count = 0;
		for(int m = 0; m < i; m++)
		{
			for(int n = 0; n < i; n++)
			{
				if(a[m] == a[n] * 2)
					count++;
			}
		}
		cout << count << endl;
	} 
	end:
	return 0;
}
