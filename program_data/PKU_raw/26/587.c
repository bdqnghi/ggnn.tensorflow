char* f(char *s,char *t)
{
	int i,j=1;
	t[0]=s[0];
	for(i=1;s[i];i++)
	{
		t[j]=s[i];
		if(s[i-1]==' ' && s[i]==' ')
			;
		else
			j++;
	}
	t[j]=s[i];
	return t;
}
int main()
{
	char s[110],t[110];
	gets(s);
	puts(f(s,t));
	return 0;
}