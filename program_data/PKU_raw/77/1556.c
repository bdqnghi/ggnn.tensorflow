int main()
{
	int N,Number[2000];
	char C[2000];
	int Top = 0;
	gets(C);
	N = strlen(C);
	for (int I = 0; I < N; I ++)
	{
		if (C[I] != C[0])
		{
			cout << Number[Top] << " " << I << endl;
			Top --;
		}
			else Number[++Top] = I;
	}
}