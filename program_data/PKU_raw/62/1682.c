int main()
{
	char a[200]={0};
	int p,x,i;
	gets(a);
	p=strlen(a);
	x=0;
	for(i=0;i<p;i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]!=' ')
			{
                printf("%c",a[i]);
			}
		}
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
	