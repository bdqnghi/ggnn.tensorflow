


int hash[6] = {0};
int rank[6] = {0};
int ans[6] = {0};
int flag[6] = {0};

void find(int n)
{
	if (n == 6)
	{
		int sign = 1;
				
		flag[1] = (rank[5] == 1);
		flag[2] = (rank[2] == 1) || (rank[2] == 2);
		flag[3] = (rank[1] == 5);
		flag[4] = (rank[3] != 1);
		flag[5] = (rank[4] == 1);

		for (int i = 1; i <= 5; i ++)
		{
			if (rank[i] > 2) flag[i] ^= 1;
			sign = sign & flag[i];
		}

		if (sign) 
			for (int i = 1; i <= 5; i++)
				ans[i] = rank[i];

		return;
	}

	for (int i = 1; i <= 5; i ++) if (hash[i] == 0)
	{
		hash[i] = 1;
		rank[n] = i;
		
		if ( (n != 5) || ( (n == 5) && ( i != 2) && (i != 3) ) )
			find(n + 1);
		
		hash[i] = 0;
		rank[n] = 0;
	}
}

int main()
{
	find(1);
	cout << ans[1];
	for (int i = 2; i <= 5; i ++) cout << ' ' << ans[i];
}

