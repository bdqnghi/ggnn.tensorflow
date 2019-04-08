//???
//2010?11?15?
//1000012753 ???
int main()
{
	int n, i, ac, cc, ri, paper, bonus[200], max, sum = 0;
	char str[200][200], student, west;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		bonus[i] = 0;
		cin >> str[i] >> ac >> cc >> student >> west >> paper;
		if (ac > 80 && paper >= 1)
			bonus[i] += 8000;
		if (ac > 85 && cc >  80)
			bonus[i] += 4000;
		if (ac > 90)
			bonus[i] += 2000;
		if (west == 'Y' && ac > 85)
			bonus[i] += 1000;
		if (cc > 80 && student == 'Y')
			bonus[i] += 850;
		sum += bonus[i]; 
	}
	max = bonus[1];
	for (i = 2; i <= n; i++)
	{
		if (max < bonus[i])
		{
			max = bonus[i];
			ri = i;
		}
	}
	cout << str[ri] << endl;
	cout << max << endl;
	cout << sum << endl;
	return 0;
}