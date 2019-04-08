int main()
{
	char a[100];
	int b[100]={0},c[100]={1};
	int i,n;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
		if(a[i]==' ') b[i]=1;
	for(i=1;i<n;i++)
	{
		if(b[i]&&b[i-1]) c[i]=0;
		else c[i]=1;
	}
	for(i=0;i<n;i++)
		if(c[i]) printf("%c",a[i]);
	return 0;
}