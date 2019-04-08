int main()
{
	char a[102],b[102]={'0'};
	gets(a);
	int i,n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			b[i]=a[i]+a[i+1];
		}
		else b[i]=a[i]+a[0];
	}
	puts(b);
}