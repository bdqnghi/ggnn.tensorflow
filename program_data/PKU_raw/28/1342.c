int main()
{
	int i,x,n;
	char str[10000],c;
	gets(str);
	n=strlen(str);
	x=0;
	for(i=0;i<=n;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			while(str[i+1]==' ')
				i++;
			printf("%d",x);
			if(str[i]!='\0')
			{	printf(",");
			x=0;}
		}
		else
			x=x+1;
	}
	return 0;
}