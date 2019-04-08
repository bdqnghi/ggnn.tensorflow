void peidui(char str[],int len);
int main()
{
	int n,i;
	char s[1000],s1[5];
	scanf("%d",&n);
	gets(s1);
	for(i=1;i<=n;i++)
	{
		gets(s);
		puts(s);
		peidui(s,strlen(s));
		
	}
}
void peidui(char str[],int len)
{
	int a1[500],n1,n2,m,i1,i2;
	n1=0;
	char *p;
	char mark[1000];
	for(m=0;m<=len-1;m++)
	{
		if(str[m]=='(')
		{
			a1[n1]=m;
			n1++;
		}
		mark[m]=' ';
	}
	for(i1=n1-1;i1>=0;i1--)
	{
		int exist;
		exist=0;
		for(i2=a1[i1]+1;i2<=len-1;i2++)
		{
			if(str[i2]==')'&&mark[i2]!='m')
			{
				exist=1;
				mark[i2]='m';
				mark[a1[i1]]='m';
				break;
				
			}
		}
		if(a1[i1]==len-1)
		{
			mark[len-1]='$';
		}

	}
	for(m=0;m<=len-1;m++)
	{
		if(str[m]=='('&&mark[m]!='m')
		{
			mark[m]='$';
		}
		if(str[m]==')'&&mark[m]!='m')
		{
			mark[m]='?';
		}
	}
	for(m=0;m<=len-1;m++)
	{
		if(mark[m]=='m')
			printf("%c",' ');
		else
			printf("%c",mark[m]);
	}
	printf("\n");
}