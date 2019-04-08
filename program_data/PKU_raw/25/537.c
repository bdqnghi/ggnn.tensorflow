int main()
{
	int m[100] = {0};
	m[0] = 2;
	int N,i,j,temp = 0,t = 0,count = 0;
	cin >> N;
	if(N == 0)
		cout << 1 << endl;
	else
	{
		for(i = 1 ; i < N ; i++)
		{
			for(j = 0 ; j <= count + 1 ; j++)
			{
				t = m[j] * 2 + temp;
				temp = t / 10;
				m[j] = t % 10;
			}
			for(j = 100 ; j >= 0 ; j--)
			{
				if(m[j]==0 && m[j-1] != 0)
				{
					count = j;
					break;
				}
			}
		}
		for(i = 99 ; m[i] == 0 ; i--);
		for(j = i ; j >= 0 ; j--)
		{
			cout << m[j];
		}
	}
	return 0;
}