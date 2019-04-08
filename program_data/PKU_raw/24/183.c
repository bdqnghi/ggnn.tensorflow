
int main()
{
	char str[50][20];
	int i;
	i = 0;
	while ( scanf("%s", str[i]) != EOF )
		i++;
	int n=i-1;
	int a[50],j,k;
	for(i=0;i<=n;i++)
		a[i]=strlen(str[i]);
	int l=0,m=0,b=a[0],c=a[0];
	for(j=1;j<=n;j++)
	{
		if(a[j]>b)
		{
			l=j;
			b=a[j];
		}
		if(a[j]<c)
		{	
			m=j;
			c=a[j];
		}
	}
	printf("%s\n%s\n",str[l],str[m]);
	return 0;
}

