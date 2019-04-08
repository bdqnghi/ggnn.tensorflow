void main()
{
	int m=0,n=0,i=0,j=0,p=0;
	char a[10]={0},b[3]={0};
loop:;
	scanf("%s %s",&a,&b);
	m=strlen(a);
	for(i=0,j=0,p=a[0];i<m;i++)
	{
		if(p<a[i])
		{
			j=i;
			p=a[i];
		}
	}
	for(i=0;i<=j;i++)
	{
		printf("%c",a[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%c",b[i]);
	}
	for(i=j+1;i<m;i++)
	{
		printf("%c",a[i]);
	}
    printf("\n");
	for(i=0;i<m;i++)
	{
		a[i]='\0';
	}
	for(i=0;i<3;i++)
	{
		b[i]='\0';
	}
	if(getchar()!=EOF)
	goto loop;
}