void main()
{
	int i,j,n,t,tot=0,b[26]={0};
	char s[300];
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<=n-1;i++)
	{
		if(s[i]<=122&&s[i]>=97)
		{t=s[i]-97;
		b[t]=b[t]+1;
		tot=tot+1;
		}
	}
	for(j=0;j<=25;j++)
	{if(b[j]!=0)
	printf("%c=%d\n",j+97,b[j]);
	}
	if(tot==0)
		printf("No");
}
