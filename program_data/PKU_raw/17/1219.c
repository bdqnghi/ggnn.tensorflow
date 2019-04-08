int main()
{
	char a[201],b[201],c[201];
	int l,i,m,d[201],y,j;
	while(scanf("%s",a)!=EOF)
	{
		l=strlen(a);
		strcpy(b,a);
		for(i=0;i<l;i++)
		{
			b[i]=' ';
		}
		strcpy(c,a);
loop:for(i=0;i<l;i++)
		{
			if(a[i]=='(')
			{
				for(j=i+1;j<l;j++)
				{
					if(a[j]=='(') break;
					else
					{
						if(a[j]==')')
						{
							a[i]=a[j]='a';
							goto loop;
						}
					}
				}
			}
	 }
	 for(i=0;i<l;i++)
	 {
		 if(a[i]=='(') b[i]='$';
		 if(a[i]==')') b[i]='?';
	 }
	 printf("%s\n%s\n",c,b);
	}
}