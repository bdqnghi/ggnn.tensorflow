int w[4];
char c[4];
void work(int p)
{
	if (p == 4)
	{
		if ((w[0] + w[1] == w[2] + w[3])&&(w[0] + w[3] > w[1] + w[2])&&(w[0] + w[2] < w[1]))
		for (int i = 50; i >= 10; i--) for (int j = 0; j < 4; j++) if (w[j] == i) cout << c[j] << ' ' << i << endl;
		return;
	}
	for (int i = 10; i <= 50; i += 10)
	{
		w[p] = i;
		work(p + 1);
	}
}
int main()
{
	c[0] = 'z';
	c[1] = 'q';
	c[2] = 's';
	c[3] = 'l';
	work(0);
	return 0;
}
