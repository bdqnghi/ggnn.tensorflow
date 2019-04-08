//**************************************
//*???????????                     
//*????? 1100012780     	        
//*???2011.11.23                     
//**************************************

int m;//?????
int day;//??
int spread[9][9] = {0};

void bac(int n)
{
	int i,j;
	int produce[9][9] = {0};
	for (i = 0;i <= 8;i++)
		for (j = 0;j <= 8;j++)
		{
			if (spread[i][j] != 0)
			{
				produce[i][j] += 2 * spread[i][j];//???????????????
				produce[i - 1][j - 1] += spread[i][j];//???????
				produce[i - 1][j] += spread[i][j];
				produce[i - 1][j + 1] += spread[i][j];
				produce[i][j + 1] += spread[i][j];
				produce[i][j - 1] += spread[i][j];
				produce[i + 1][j - 1] += spread[i][j];
				produce[i + 1][j] += spread[i][j];
				produce[i + 1][j + 1] += spread[i][j];
			}
		}
	for (i = 0;i <= 8;i++)
		for (j = 0;j <= 8;j++)
			spread[i][j] = produce[i][j];
	if (n == day)//???????????
	{
		for (i = 0;i <= 8;i++)
		{
			for (j = 0;j <= 8;j++)
			{
				if (j != 8)
					cout<<spread[i][j]<<" ";
				else
					cout<<spread[i][j];
			}
			if (i != 8)
				cout<<endl;
		}
		return;
	}
	bac(n + 1);//?????
}		

int main()
{
	cin>>m>>day;
	spread[4][4] = m;
	bac(1);
	return 0;
}
