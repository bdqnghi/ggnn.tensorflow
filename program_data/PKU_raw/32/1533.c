void j(char a[],char b[])
{
	int i,m,n;
	m=strlen(a);
	n=strlen(b);
	for(i=m-1;i>=m-n;i--)
	{
		a[i]=a[i]-b[i-m+n]+48;
	}
	for(i=m-1;i>=0;i--)
	{
		if(a[i]<48)
		{
			a[i]=a[i]+10;
			a[i-1]=a[i-1]-1;
		}
	}
    printf("%s\n",a);
}

void main()
{
	int i,n;
	char a[20][100],b[20][100],c;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		c=getchar();
	}
	for(i=0;i<n;i++)
	{
		j(a[i],b[i]);
	}
}