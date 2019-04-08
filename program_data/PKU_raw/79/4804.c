
int main()
{
	int N, M, i, cur, leave;
	int a[301];
	while(1)
	{
		scanf("%d %d", &N, &M);
		if (N==0 && M==0)
			break;

		for (i=1; i<=N; i++)
			a[i] = i;
		cur = 1;
		while(1)
		{
			if (N==1)
				break;
			leave = (cur+M-1)%N;
			if (leave==0)
			{
				leave=N;
				cur=1;
			}
			else
				cur=leave;
			for (i=leave; i<N; i++)
				a[i] = a[i+1];
			N--;
		}
		printf("%d\n", a[1]);
	}
	return 0;
}