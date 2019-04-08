void main()
{
	int i,j,n;
	char a[11],b[3],c[14];
	for(j=0;j<10;j++)
	{
	for(i=0;i<11;i++)
		a[i]='\0';
	for(i=0;i<3;i++)
		b[i]='\0';
	for(i=0;i<14;i++)
		c[i]='\0';
	scanf("%s",a);
	scanf("%s",b);
	for(i=0,n=0;a[i]!='\0';i++)
		if(a[i]>a[n])
			n=i;
	strncpy(c,a,n+1);
	c[n+1]=b[0];
	c[n+2]=b[1];
	c[n+3]=b[2];
	for(i=n+1;a[i]!='\0';i++)
		c[i+3]=a[i];
	printf("%s\n",c);
	}
}