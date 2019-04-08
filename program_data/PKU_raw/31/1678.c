int main()
{
	int i,n;
	char a[MAX][MAX];
	for(i=0; ;i++)
	{
		gets(a[i]);
		if(strcmp(a[i],"end")==0) break;
	}
    for(n=i-1;n>=0;n--)
	{
		puts(a[n]);
	}
	return 0;
}
