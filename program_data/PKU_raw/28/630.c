void main()
{
	int i,j,a[1111],m=0;
	char b[11111],*p;
	gets(b);
	for(p=b;*p!='\0';p++)
	{
		if(*p==' ') m=m+1;
	}
	for(i=0;i<=m;i++) a[i]=0;
	i=0;
	for(p=b;*p!='\0';p++)
	{
		if(*p!=' ') a[i]=a[i]+1;
		else if(*p==' '&&*(p-1)!=' ') i=i+1;
	}
	j=i;
	printf("%d",a[0]);
	for(i=1;i<=j;i++)
		printf(",%d",a[i]);
}
