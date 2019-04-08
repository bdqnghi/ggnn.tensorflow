int main()
{
	int N;
	scanf("%d",&N);
	if (!N) cout << 0 << endl;
	else while (N)
	{
		cout << N%10;
		N/=10;
	}
	return 0;
}
