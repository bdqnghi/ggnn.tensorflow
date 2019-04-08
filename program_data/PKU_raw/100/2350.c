int main()
{
	char a[300];
	char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int d[26]={0},e[26]={0};
    int l,i,j,f;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=(l-1);i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			for(j=0;j<=25;j++)
			{
				if(a[i]==b[j])
				{ 
					d[j]++;
				    break;
				}
			}
		}
        if(a[i]>=97&&a[i]<=122)
		{
			for(j=0;j<=25;j++)
			{
				if(a[i]==c[j])
				{ 
					e[j]++;
				    break;
				}
			}
		}
	}
	f=0;
	for(i=0;i<=25;i++)
	{
		if(d[i]!=0)
		{
			printf("%c=%d\n",b[i],d[i]);
			f++;
		}
	}

	for(i=0;i<=25;i++)
	{
		if(e[i]!=0)
		{
			printf("%c=%d\n",c[i],e[i]);
			f++;
		}
	}
	if(f==0)
		printf("No");
}