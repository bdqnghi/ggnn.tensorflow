void zhengli(char a[])
{
	void panduan(char a[]);
	int i,k,j;
	k=strlen(a);
	for(j=0;j<50;j++)
	{
		for(i=0;i<k;i++)
		{
			if(a[i]=='$')
				a[i]='(';
			else if(a[i]=='?')
				a[i]=')';
		}
		panduan(a);
	}
}
void panduan(char a[])
{
	int i,k,flag=0,j;
	char b[110];
	k=strlen(a);
	b[k]='\0';
	for(i=0;i<k;i++)
	{
		if(a[i]!='('&&a[i]!=')')
			b[i]=' ';
		else if(a[i]=='(')
		{
			if(flag==1)
			{
				b[j]='$';
				j=i;
				b[j]='$';
			}
			else
			{
				flag=1;
				j=i;
				b[j]='$';
			}
		}
		else
		{
			if(flag==1)
			{
				b[j]=' ';
				flag=0;
				b[i]=' ';
			}
			else
			{
				b[i]='?';
			}
		}
	}
	strcpy(a,b);
}
void main()
{
	int i,k;
	char a[110];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%s",a);
		printf("%s\n",a);
		panduan(a);
		zhengli(a);
		printf("%s\n",a);
	}
}
