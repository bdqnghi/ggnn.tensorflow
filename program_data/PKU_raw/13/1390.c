int main(int argc, char* argv[])
{
	int n;
	int histgram[101];
	int i;
	int x;

	scanf("%d",&n);
	for (i=0; i<101; i++)
	{
		histgram[i]=0;
	}

	scanf("%d", &x);
	histgram[x]++;
	printf("%d",x);

	for (i=0; i<n-1; i++)
	{
		scanf("%d", &x);
		if (!histgram[x])
		{
			printf(" %d",x);
		}
		histgram[x]++;
	}

	return 0;
}