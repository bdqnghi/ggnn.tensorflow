void f(char a[],char b[])
{
	int i,m,n,j;
	char c[100];
    for(i=0;i<100;i++)
		c[i]=0;
	m=strlen(a);
	for(j=m-1;j>=0;j--)
	{
		a[j+100-m]=a[j];
		a[j]='0';
	}
	if(a[m]==0) a[m]='0';
	n=strlen(b);
	for(j=n-1;j>=0;j--)
	{
		b[j+100-n]=b[j];
		b[j]='0';
	}
    if(b[n]==0) b[n]='0';
	for(i=99;i>=0;i--)
	{
		if(a[i]>=b[i])
			c[i]=a[i]-b[i];
		else
		{
			c[i]=a[i]+10-b[i];
			a[i-1]=a[i-1]-1;
		}
	}
	for(j=0;j<100;j++)
	{
		if(c[j]!=0)
			break;
	}
	for(j;j<=99;j++)
		printf("%d",c[j]);
	printf("\n");
}
void main()
{
	char a[100],b[100];
	int i,num,j;
	scanf("%d",&num);
	getchar();
	for(i=0;i<num;i++)
	{
		for(j=0;j<100;j++){
			a[j]='0';
			b[j]='0';
		}
		gets(a);
	
		gets(b);
		f (a,b);
                  getchar();
	
	}
}