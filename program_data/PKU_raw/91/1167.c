int main()
{
	int t,i,n,l;
	char s[300],a[300][300],ch;
gets(s);
l=strlen(s);
ch=s[0];
for (i=0;i<l-1;i++) s[i]=s[i]+s[i+1];
s[l-1]+=ch;
printf("%s",s);
}

