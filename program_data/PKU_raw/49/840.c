void f1(char a[],int l)
{
	char b[501];
	int j;
	for (j=0;j<l;j++)
	{
		b[l-j-1]=a[j];
	}
	b[l]='\0';
	if (strcmp(a,b)==0)
		puts(a);
}
void f2(char s[],int l,int L)
{
	int m,n,i;
	char a[501];
	for(m=0;m<L-l+2;m++)
	{
		i=0;
		for(n=m;n<m+l;n++)
		{
			a[i]=s[n];
			i=i+1;
		}
		a[i]='\0';
		f1(a,l);
	}
}
void f3(char s[], int L)
{
	int l;
	for (l=2;l<L+1;l++)
		f2(s,l,L);
}
void main()
{
	char s[501];
	gets(s);
	int L;
	L=strlen(s);
	f3(s,L);
}
