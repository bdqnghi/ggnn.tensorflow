int main()
{
int m,k;
scanf("%d",&m);
getchar();
for(k=0;k<m;k++)
{
	int i,f,len,j;
	char a[200],b[200],c[200];
	gets(a);
	len=strlen(a);
	strcpy(c,a);
	b[len]='\0';
	for(i=0;i<len;i++)
	{
		b[i]=' ';
	}
	for(i=len-1;i>=0;i--)
	{
		if(a[i]=='(')
		{
			f=0;
			for(j=i;j<len;j++)
			{
				if(a[j]==')')
				{
					f=1;
					a[j]='a';
					break;
				}
			}
			if(f==0)
			{
				b[i]='$';
			}
			

		}
	}
	for(i=0;i<len;i++)
	{
		if(a[i]==')')
			{
				b[i]='?';
			}
	}
	printf("%s\n%s\n",c,b);
}
}