
struct note
{
	int know;
	int known;
}men[10010];

int main()
{
	int n, i, j, flag = 0;
	cin >> n;
	while(cin >> i >> j)
	{
		if (i == 0 && j == 0)
			break;
		men[i].know++;
		men[j].known++;
	    if (men[j].known == n - 1 && men[j].know != n)
		{
			cout << j;
			flag = 1;
		}
		if (men[i].known == n - 1 && men[i].know != n)
		{
			cout << i;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "NOT FOUND";
	return 0;
}