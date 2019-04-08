void print(int a,int b,char d[])
{
	int i;
	for (i=a;i<=b;i++)
		printf("%c",d[i]);
}
int arrange(char a[])
{
	int i,m=0;
	int t=a[0];
	int l=strlen(a);
	for (i=1;i<l;i++)
		if (a[i]>t)
		{
			m=i;
			t=a[i];
		}
	return m;
}
void main()
{
	char a[11],c[4];
	while (scanf("%s%s",a,c)!=EOF)
	{
		int l1=strlen(a),l2=strlen(c);
		int m=arrange(a);
		print(0,m,a);
		print(0,l2-1,c);
		print(m+1,l1-1,a);
		printf("\n");
	}
}