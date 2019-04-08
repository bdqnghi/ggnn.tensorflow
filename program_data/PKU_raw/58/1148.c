int zimuxiahuaxian(char x)
{
	int a;
	if((x>=65&&x<=90)||(x>=97&&x<=122)||x=='_') a=1;
	else a=0;
	return a;
}

int shuzi(char x)
{
	int a;
	if((x>=48)&&(x<=57)) a=1;
	else a=0;
	return a;
}
int main()
{
	int n,i,m,j,k=0;
	char a[81];
	scanf("%d",&n);
	gets(a);
	for(i=0;i<n;i++)
	{
		gets(a);
        m=strlen(a);
		if(zimuxiahuaxian(a[0])==0) k=0;
		else
		{
			k=1;
			for(j=1;j<m;j++)
			{
                if(zimuxiahuaxian(a[j])!=1&&shuzi(a[j])!=1)
				{
					k=0;
					break;
				}
				else k=1;
			}
		}
		if(k==0) printf("0\n");
		else printf("1\n");
	}
	return 0;
}

