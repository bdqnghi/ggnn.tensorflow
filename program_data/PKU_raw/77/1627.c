char queen[1000];
int main()
{
	cin >> queen;
	int len = strlen(queen);
	char a, b;
	int cnt = 0;
	int boy[1000] = {0};
	a = queen[0];
	b = queen[len - 1];
	for (int i = 0; i < len; i++)
	{
		if (queen[i] == a)
		{
			boy[cnt] = i;
			cnt ++;
		}
		if (queen[i] == b)
		{
			cnt --;
			cout << boy[cnt] << ' ' << i << endl;
		}
	}
	while(EOF!=getchar());
	return 0;
}