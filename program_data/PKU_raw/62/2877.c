int main ()
{
	//int isalpha(int ch);
	char a[100000],b[100000];
	int i=0,l,c=1;
	int m[100000];
	gets (a);
	l=strlen(a);
	m[0]=1;
	b[0]=a[0];
	for (i=1;i<l;i++)
	{
		//scanf ("%c",(a[i]));
		m[i]=isalpha(a[i]);
		if ((m[i]!=0)||((a[i]==' ')&&(m[i-1]!=0)))
		{
			b[c]=a[i];
			c++;
        }
	}
	b[c]='\0';
	printf ("%s",b);
	return 0;
}