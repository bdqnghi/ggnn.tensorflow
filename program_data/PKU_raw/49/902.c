void substr(char s[],int start,int end)
{
	int a=start,b=end,i;
	while ((end>start)&&(s[start]==s[end]))
	{ 
		start++; end--;
	}
	while(start>end) 
	{
		for(i=a;i<=b;i++) putchar(s[i]);
		start=start-1;
		putchar('\n');
	}
}
void sub(char s[],int start,int end)
{
	int a=start,b=end,i;
	while ((end>start)&&(s[start]==s[end]))
	{ 
		start++; end--;
	}
	while(start>=end) 
	{
		for(i=a;i<=b;i++) putchar(s[i]);
		start=start-1;
		putchar('\n');
	}
}
void main ()
{
	char s[500];
	int m,n,width,start;
	gets(s);
	n=strlen(s);
	for(width=1; width<n; width++)
		for(m=0; m<=n-width;m++)
			if(n%2==0)
				substr(s,m,m+width);
			else
				sub(s,m,m+width);
}