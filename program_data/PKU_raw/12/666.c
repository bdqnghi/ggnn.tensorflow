int main()
{
	int a[16] = {0},n = 0,i,m,j;
	while(cin >> a[0])  
	{
		if(a[0] != (-1))
		{
        	for(i = 1;i <= 15;i++)
			{
	         	cin >> a[i];
				if(a[i] == 0)
					break;
			}
	        for(j = i-1;j >= 0;j--)
			{
				for(m = i-1;m >= 0;m--)
				{
					if(a[j] == 2 * a[m])
						n++;
				}
			}
			cout << n << endl;
			n = 0;
		}
		else
			break;
	}
	return 0;
}
