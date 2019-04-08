int main()
{
	int i,a;
	char st[101];
	gets(st);
	for(i=0;i<101;i++)
	{
        if(st[i]=='\0')
		{
			a=i;
			break;
		}
	}
	for(i=0;i<a;i++)
	{
		if(!(st[i]==' '&&st[i+1]==' '))
		printf("%c",st[i]);
	}
	return 0;
}
