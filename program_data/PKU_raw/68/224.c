int check(int n) {
	int j;
	for (j=3;j<=sqrt(n);j+=2) if (n%j==0) return 0;
	return 1;
}
int main(int argc, char* argv[])
{
	int n, k, i, a;
	scanf("%d", &n);
	for (k=6;k<n+1;k+=2)
	{
		
		
			for (i=3;i<=k/2;i+=2)
			{
				if (check(i))
				{
					a=k-i;
					if (check(a))
					{
							printf("%d=%d+%d\n", k, i, a);
						    break;
					}
				}
			}
		
	}
	return 0;
}