int main()
{
	char str[200];
	gets(str);
	int n=strlen(str);
	int i,j,c[50],d=0;
	c[0]=n;
	for(i=n-1;i>=0;i--)
		if(str[i]==' ')
		{
			d++;
			c[d]=i;
			for(j=i+1;j<c[d-1];j++)
				putchar(str[j]);
            printf(" ");
		}
	for(i=0;i<c[d];i++)
		putchar(str[i]);
}