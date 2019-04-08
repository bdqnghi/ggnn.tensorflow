int main()
{
	int i;
	char a[250]={','};
	gets(a);
    for(i=0;i<200;i++)
	{
		if(a[i]>=65&&a[i]<=(65+26)||a[i]>=97&&a[i]<=(97+26)||a[i]=='.')
		{
			printf("%c",a[i]);
		}
		else if(a[i]==' ')
		{
			if(a[i+1]!=' ')
			{
	           printf("%c",a[i]);
			}
		}
		else
		{
			continue;
		}
	}
	return 0;
}