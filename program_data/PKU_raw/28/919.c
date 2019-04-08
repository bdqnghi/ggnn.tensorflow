
int main()
{
    char s[10000];
    char *pr[300];
    int i, n = 0,len;

   
    gets(s);
 
  
    len=strlen(s);
    pr[n++] = s;
    for (i=0; i<len; i++) {
        if (s[i] == ' ') {
            s[i] = 0;
            pr[n++] = s+i+1;
        }
    }

	for(i=0;i<n-1;i++)
	{
		len=strlen(pr[i]);
		if(len!=0)
		{
			printf("%d,",len);
		}
	}
	len=strlen(pr[n-1]);
	if(len!=0)
	{
		printf("%d",len);
	}
	return 0;
}
