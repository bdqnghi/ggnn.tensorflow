void main()
{
	int f(char s[],int n,int len,int i);
	int n,len=0,i=0,j=0,t=0,x=0;
	char s[500],p[500];
	scanf("%d",&n);
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len-n+1;i++)
	{
		p[i]=f(s,n,len,i);
	}
	for(i=0,t=p[0];i<len-n+1;i++)
	{
		if(t<p[i])t=p[i];
	}
	if(t==0)printf("NO");
	else
	{
    	printf("%d\n",t+1);
    	for(i=0;i<len-n+1;i++)
		{
	    	if(p[i]==t)
			{
			 for(j=i;j<i+n;j++)
				printf("%c",s[j]);
			 printf("\n");
			}
		}
	}
}

int f(char s[],int n,int len,int i)
{
	int j,cou=0,k,q;
	for(j=i+1;j<len-n+1;j++)
	{
		if(s[j]==s[i])
		{
			for(k=i,q=j;k<i+n;k++)
				if(s[k]==s[q])q++;
			if(q>=j+n)cou++;
		}
	}
	return(cou);
}