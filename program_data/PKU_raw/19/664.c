int main ()
{
	char s[100],a[100],b[100];	
    gets(s);
	gets(a);
	gets(b);
	int ls,la,lb,i,j,m;
	ls=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<ls;i++)
	{
		if(s[i]==a[0]&&s[i-1]==' '||s[0]==a[0])
		{
			m=1;
			for(j=1;j<la;j++)
			{
				if(s[i+j]!=a[j])
				{
					m=2;
				}
			}
			if(m==1)
			{	
				char x[100];
				strcpy(x,s);
				for(j=i;j<i+lb;j++)
				{
					s[j]=b[j-i];
				}
				for(j=i+lb;j<ls+lb-la;j++)
				{
					s[j]=x[j-lb+la];
				}
				ls=ls-la+lb;
				i=i+lb-1;
			}
		}
	}
	for(i=0;i<ls;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
