
int main()
{
	int a[100], b[100], c[100], d[100], e[100], f[100];
	int i, n;

	
	for(i = 0; 1; i++)
	{
		
		scanf("%d%d%d%d%d%d", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]);
		if(a[i]==0 && b[i]==0 && c[i]==0 && d[i]==0 && e[i]==0 && f[i]==0)
			break;
		else
		{
			n = (12-a[i])*3600 - (b[i]*60+c[i]) + d[i]*3600 + (e[i]*60+f[i]);
			printf("%d\n", n);

		}
		
	}
	
	
	
	return 0;
}