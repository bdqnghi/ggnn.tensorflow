char girl;
int main()
{
	void Match(char queue[], int p);
	char queue[100 + 10];
	cin.getline(queue, 101);
	girl = queue[strlen(queue) - 1];
	Match(queue, 0);
	return 0;
}

void Match(char queue[], int p)
{
	int q = p;
	do
	{q++;} while(queue[q] == 0);
	if (queue[q] == girl)
	{
		cout << p << " " << q << endl;
		queue[p] = 0;
		queue[q] = 0;
		do
		{p --; if (p < 0) break;}
		while(queue[p] == 0);
		if (p >= 0)
			Match(queue, p);
	}
	else Match(queue, q);
}