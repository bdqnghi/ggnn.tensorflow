

char S[1000][100];
int Size = 0;
int main()
{
	//freopen ("a.txt", "r", stdin);
	while (!feof(stdin)) scanf ("%s", S[Size ++]);
	//while (scanf ("%s", S[Size ++]));
	Size --;
	for (int i = 0; i < Size - 3; i ++)
		if (strcmp(S[i], S[Size - 2]) == 0)
			printf ("%s ", S[Size - 1]);
		else
			printf ("%s ", S[i]);
	if (strcmp(S[Size - 3], S[Size - 2]) == 0)
		printf ("%s\n", S[Size - 1]);
	else
		printf ("%s\n", S[Size - 3]);
	return 0;
}
