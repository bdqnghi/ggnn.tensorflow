int len;
char a, b;
char ren[100];
void run(char ren[100])
{
	int i, j;
	for (i = 0; i < len; i++)
		if (ren[i] == b)
		{
			for (j = i - 1; j >= 0; j--)
				if(ren[j] == a)
				{
					cout << j << " " << i << endl;
					ren[i] = 0;
					ren[j] = 0;
					break;
				}
		}
}
int main()
{
	cin.getline(ren,100);
	len = strlen(ren);
	a = ren[0];
	b = ren[len - 1];
	run(ren);
	return 0;
}
