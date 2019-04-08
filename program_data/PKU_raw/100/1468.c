int main()
{
    char s[400];
	int i,b=0,a[100];
	gets(s);
	for(i=0;i<100;i++)
		a[i]=0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
             a[s[i]-'A']++;
		else if(s[i]>='a'&&s[i]<='z')
			a[s[i]-'a'+32]++;
	}
	for(i=0;i<100;i++)
	{
		if(a[i])
		{
			printf("%c=%d\n",'A'+i,a[i]);
	    	b++;
		}
	}
	if(b==0)
		printf("No\n");
}
