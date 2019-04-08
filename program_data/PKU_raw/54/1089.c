int f() 
{
	int n,k,m,i;
    scanf("%d %d", &n, &k);
    int last = 0;
	while (1) 
	{
		last++;
		m = last * n + k;
		int t = 1;
        for (i = 1; (i < n) && t; i++) 
		{
			t = (m % (n - 1) == 0);
			m = m / (n - 1) * n + k;
		}
		if (t)
			break;
	}
	printf("%d\n", m);
	
  return 0;
}

int main() 
{
	f();
}
