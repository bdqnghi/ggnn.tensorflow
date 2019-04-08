int main()
{
	int a[18] = {0},i,n,ii,s;
	char c;
	while (1)
	{	
		i = 1;
		while (1)
		{
			cin>>a[i];
			if ((a[i] == 0)||(a[i] == -1))
				break;
			i++;
		}
        if (a[i] == -1)
			break;
		n = i;
		i = 1;
		s = 0;
		while (i < n)
		{
			ii = 1;
			while (ii < n)
			{
				if (a[ii] == 2 * a[i])
					s++;
				ii++;
			}
			i++;
		}
		cout<<s<<endl;
	}
	return 0;
}