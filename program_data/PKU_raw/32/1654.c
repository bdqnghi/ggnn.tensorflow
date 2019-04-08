void xj(char x[],char a[])
{
	int i,j;
	char z[100]={0},y[100];
	for(i=0;i<100;i++)
		y[i]='0';
	for(i=0;i<strlen(a);i++)
		y[i+strlen(x)-strlen(a)]=a[i];
	for(i=strlen(x)-1;i>=0;i--)
	{z[i]=x[i]+10-y[i];
	 if(i-1>=0)
	 x[i-1]+=z[i]/10-1;
	 z[i]=z[i]%10+48;
	}
	for(i=0;i<strlen(x);i++)
		if(z[i]!='0')break;
	for(j=i;j<strlen(x);j++)
		putchar(z[j]);
	putchar('\n');
}
void main()
{
	int n,i;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",a);
	 scanf("%s",b);
	 xj(a,b);
	}
}