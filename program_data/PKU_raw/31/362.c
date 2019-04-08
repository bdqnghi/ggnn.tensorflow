int main()
{
	int i,m;
	char a[501][500];
	for(i=0;;i++)
	{
		gets(a[i]);
		if (a[i][0]=='e')
		{
			m=i;
			break;
		}
	}
	for(i=m-1;i>=0;i--)
	{
		puts(a[i]);
	}
	return 0;
}
