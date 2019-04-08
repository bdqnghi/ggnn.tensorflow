char s[600];
int main()
{
	int comp(int sta,int lenx);
	int i,j,len,p;
	gets(s);
	len=strlen(s);
	for (i=2; i<=len; i++) 
		for (j=0; j<=len-i; j++)
			if (comp(j,i)==1) {
				for (p=j; p<=j+i-1; p++) printf("%c",s[p]);
				printf("\n");
			}
	return 0;
}
int comp(int sta,int lenx)
{
	int i,j;
	for (i=1; i<=lenx/2; i++) if (s[sta+i-1]!=s[sta+lenx-i]) return (0);
	return (1);
}