
int main(int argc, char* argv[])
{
	int a[30000] = {0}, n, i, j, k, temp, b=0 ;
	scanf("%d",&n);
	for (i = 3; i <= n; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0) break;
			else continue;
		}
		if (j > sqrt(i))
		{
			a[b] = i;
			b++;
		}
	}
	b--;
	for (i = 6; i <= n; i += 2)
	{
		temp = 0;
		for (j = 0; j <= b; j++)
		{
			for (k = 0; k <= b; k++)
				if (i - a[j] == a[k])
				{
					temp = 1;
					break;
				}
			if (temp)
				break;
		}
		if (temp)
			printf("%d=%d+%d\n",i,a[j],a[k]); 
	}
	return 0;
}
