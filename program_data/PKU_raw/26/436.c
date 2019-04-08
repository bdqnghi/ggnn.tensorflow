int main()
{
	char a[100];
	gets(a);
	int len=strlen(a);
	int i,j;
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			for(j=1;j<(len-1-i);j++)
			{
				if(a[i+j]==' ')
					a[i+j]='#';
				else
					break;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		if(a[i]!='#')
			printf("%c",a[i]);
	}
	return 0;

}