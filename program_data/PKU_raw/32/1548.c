void minus(char a[100],char b[100])
{
	int i,k,m,n;
	char c[100];
	m=strlen(a);
	n=strlen(b);
	for(i=m-1;i>m-n-1;i--)
	{
		if(a[i]=='/') 
		{
			a[i]='9';
			a[i-1]=a[i-1]+'0'-'1';
		}
		if(a[i]>=b[i-m+n]) c[i]=a[i]-b[i-m+n]+'0';
		if(a[i]<b[i-m+n])
		{
			c[i]=a[i]-b[i-m+n]+':';
			a[i-1]=a[i-1]+'0'-'1';
		}
	}
	for(i=m-n-1;i>=0;i--)
	{
		if(a[i]=='/')
		{
			a[i]='9';
			a[i-1]=a[i-1]+'0'-'1';
		}
		c[i]=a[i];
	}
	for(i=0;;i++)
	{
		k=i;
		if(c[i]!='0')break;
	}
	for(i=k;i<m;i++)
		printf("%c",c[i]);
	printf("\n");
}
void main()
{
	int j,i;
	char a[10][100],b[10][100];
	scanf("%d",&j);
	for(i=0;i<j-1;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		printf("\n");
	}
	scanf("%s",a[j-1]);
	scanf("%s",b[j-1]);
	for(i=0;i<j;i++)
		minus(a[i],b[i]);
}