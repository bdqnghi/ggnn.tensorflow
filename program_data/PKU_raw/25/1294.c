/**
????5.cpp
?  ?????
?  ??11.16
?  ????2?N??
*/
int main()
{

	int N, i, j ,flag = 0;
	int ans[32] = {0};  // ???2^100?31???????????32
	ans[31] = 1;


	cin >> N;

	if(N == 0)
		cout << "1" << endl;
	else
	{
		for(i = 0 ; i < N ; i++)
		{
			for(j = 31 ; j >= 0 ; j--)
			{
				ans[j] = 2 * ans[j] + flag;
				if(ans[j] >= 10)
				{
					ans[j] -= 10;
					flag = 1;
				}
				else
					flag = 0;
			}
		}
		i = 0;
		while(ans[i] == 0)
			i++;
		for(; i < 32 ; i++)
			cout << ans[i];
		cout << endl;
	}
	return 0;
}



