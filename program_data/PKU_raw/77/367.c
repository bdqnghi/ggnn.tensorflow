char all[101];
int times[101];
void oper(char, int);
int main()
{
	char boy;
	int l;
	memset(times, 0, sizeof(times));
	cin.getline(all,101);
	l = strlen(all);
	boy = all[0];
	oper(boy, l);
	return 0;
}

void oper(char boy, int l)
{
	int i, j;
	if (l == 0)
		return;
	for (i = 1; i < l; i++)
	{
		if (all[i] != boy && all[i - 1] == boy)
		{
			cout << i - 1 + 2 * times[i - 1] << " " << i + 2 * times[i] << endl;
			for (j = i - 1; j < l - 2; j++)
			{
				all[j] = all[j + 2];
				times[j + 2]++;
				times[j] = times[j + 2];
			}
			l -= 2;
			break;
		}
	}
	oper(boy, l);
	return;
}