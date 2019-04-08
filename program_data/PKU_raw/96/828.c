int main()
{
	char a[102];
	int b[102],c[102],d[102];
	int e,i,j;
	gets(a);
	e=(int)strlen(a);
	for(i=0;i<e;i++)
	{
		b[i]=a[i]-'0';
	}
	if(e==2&&(b[0]==1&&b[1]<3))
	{
		printf("0\n%d",10*b[0]+b[1]);
	}
	else if(e==1)
	{
		printf("0\n%d",b[0]);
	}
	else{
	c[0]=b[0]*10+b[1];
	for(j=1;j<e;j++)
	{
		c[j]=b[j+1];
	}
	d[0]=c[0]/13;
	c[0]=c[0]%13;
	for(j=0;j<e-1;j++)
	{
		d[j+1]=(10*c[j]+c[j+1])/13;
		c[j+1]=(10*c[j]+c[j+1])%13;
	}
	if(d[0]==0)
	{
		for(j=1;j<e-1;j++)
		{
			printf("%d",d[j]);
		}
	}
	else
	{
		for(j=0;j<e-1;j++)
		{
			printf("%d",d[j]);
		}
	}
	printf("\n");
	printf("%d",c[e-2]);}
	return 0;
}