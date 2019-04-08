int main()
{
	int n,m,i,k,cnt;
	int num[330];
	while(1)
	{
		cin >> n >> m;
		if(!n)
			break;
		cnt = n;
		for(i = 1; i <= n; i++)
			num[i] = 1;
		k = 1;
		i = 1;
		while(cnt > 1)
		{
			if(i > n)
				i = 1;
			if (num[i] == 0)
				i++;
			else
				if(k == m)
				{
					num[i] = 0;
				    cnt --;
				    k = 1;
				    i++;
				}
				else
				{
					i++;
					k++;
				}
		}
		for(i = 1; i <= n; i++)
			if(num[i] != 0)
			{
				cout << i << endl;
				break;
			}
	}		
    return 0;
}