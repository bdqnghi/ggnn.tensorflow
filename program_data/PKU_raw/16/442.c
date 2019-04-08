int main()
{
	char s[6],t[6];
	int i,x;
	gets(s); 
	x=strlen(s); 
	for (i=0;i<=x-1;i++) t[x-1-i]=s[i];
	for (i=x;i<=5;i++) t[i]=0;
	puts(t);
}
