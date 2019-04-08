void main()
{
	char a[10000],*p=a,n;
	int i;
	gets(a);
	n=strlen(a);
	for(p=a;;)
	{
		for(i=0;*p!=' '&&*p!='\0';p++)
			i++;
		if(i!=0&&*p==' ')
		{
			printf("%d,",i);
			p++;
		}
		else if(i==0&&*p==' ')
			p++;
		else if(i!=0&&*p=='\0')
		{
			printf("%d",i);
			break;
		}
	}
}
		