
int counter = 0;
int baifang(int n, int m);
int main()
{
	int n, i, N, M;
	cin >> n;
	for (i = 1; i <= n; i++)
	{    counter = 0;
	     cin >> M >> N;
		 counter = baifang (M, N);
		 cout << counter <<endl;
	}
	    return 0;
}

int baifang (int m, int n)
{
	int answer = 0;
	if (m == 0 && n == 0)
		return 1;
	if (m == 0 && n != 0)
        return 1;
	if (m != 0 && n == 0)
		return 0;
	if (n > 0)
		answer += baifang(m, n - 1);
	if (m >= n)
		answer += baifang(m - n, n);
	return answer;
}
