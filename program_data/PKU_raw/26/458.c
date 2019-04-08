
int main()
{
	char s[1000],d;
	int i,w=0,k,n,m,sd[1000];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		sd[i]=1;
	for (i=1;i<n;i++)
	{
		sd[i]=sd[i-1];
		if (s[i]==32)
			sd[i]--;
		if (s[i]!=32&&(sd[i-1]<=0))
			sd[i]=1;
	}
	for (i=0;i<n;i++)
	{if (sd[i]>=0)
		printf("%c",s[i]);
	}
}
