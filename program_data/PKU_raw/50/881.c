
int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int D;
	scanf ("%d", &D);D --;
	for (int i = 0; i < 12; i ++)
		for (int j = 1; j <= Month[i]; j ++)
		{
			D ++;
			if (D % 7 == 5 && j == 13) printf ("%d\n", i + 1);
		}
	return 0;
}
