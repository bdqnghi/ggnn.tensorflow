int l;
int main()
{
	char a[5];
	int n;
	void pailie(int n,char ar[]);
   	gets(a);
	l=strlen(a);
	n=l;
	pailie(n,a);
	return 0;
}
void pailie(int n,char ar[])
{
	if(n==1)printf("%c",ar[l-n]);
	else
	{
		pailie(n-1,ar);
		printf("%c",ar[l-n]);
	}
}
