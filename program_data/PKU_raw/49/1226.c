
char s[500];

int substr(char s[], int start, int end)
{
	while ((end>start)&&(s[start]==s[end]))
	{
		start++; end--;
	}
	if(end>start)
		return 0; 
	else 
		return 1; 
}

void osubstr(char s[], int start, int end)
{
	int i;
	for(i=start;i<=end;i++)
		putchar(s[i]);
	putchar('\n');
}

int main()
{
	unsigned int m,n,width;
	gets(s);
	for(width=1; width<strlen(s); width++)
	    for(m=0; m<=strlen(s)-width;m++)
		    if(substr(s, m, m+width)) 
			    osubstr(s, m, m+width);
}