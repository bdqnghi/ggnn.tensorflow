int bijiao(int p,char *a,int n,char *b)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[p+i]!=b[i])
		{
			return 0;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
}
int main()
{
	char str[1000];
	char a[100];
	char b[100];
	int i;
	int len1,len2,len;
	gets(str);
	gets(a);
	gets(b);
	len=strlen(str);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			if(bijiao(i,str,len1,a)==1&&str[i+len1]==' ')
			{
				printf("%s",b);
				i=i+len1-1;
			}
			else
			{
				printf("%c",str[i]);
			}
		}
		else
		{
			if(bijiao(i,str,len1,a)==1&&str[i+len1]==' '&&str[i-1]==' ')
			{
				printf("%s",b);
				i=i+len1-1;
			}
			else if(bijiao(i,str,len1,a)==1&&i+len1==len&&str[i-1]==' ')
			{
				printf("%s",b);
				i=i+len1-1;
			}
			else
			{
				printf("%c",str[i]);
			}
		}
	}
	printf("\n");
	return 0;
}