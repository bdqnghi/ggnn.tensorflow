void main()
{
	int i,j,k,n,m;
	long int t,p;
	char a[50],c[50];
	int b[50];
	scanf("%d %s %d",&n,a,&m);
	t=0;
	for(j=0;a[j]!='\0';j++)
	{
		if('a'<=a[j]&&a[j]<='z')
			b[j]=a[j]-87;
		else if('A'<=a[j]&&a[j]<='Z')
			b[j]=a[j]-55;
		else if('0'<=a[j]&&a[j]<='9')
			b[j]=a[j]-48;
	}
	for(i=0;i<=j-1;i++)
		t=pow(n,j-i-1)*b[i]+t;
    p=t;
	if(t==0)
		printf("0");
	else 
	{
	for(k=0;t!=0;k++)
		t=t/m;
	for(i=k-1;i>=0;i--)
	{
		if((p%m)>=10)
			c[i]=p%m+55;
		else 
			c[i]=p%m+48;
		p=(p-p%m)/m;
	}
	c[k]='\0';
	puts(c);
	}
}
