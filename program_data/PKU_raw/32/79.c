int main()
{
	void f(char x[100],char y[100]);
	char a[100][100],b[100][100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	    scanf("%s",b[i]);
	}
    for(i=0;i<n;i++)
    f(a[i],b[i]);
	return 0;
}
void f(char x[100],char y[100])
{
	int m,n,i,j;
	char z[100],s[100];
	strcpy(z,x);
	m=strlen(x);
	n=strlen(y);
	for(i=1;i<=n;i++)
	{if(x[m-i]<y[n-i])
	{x[m-i]+=10;
	z[m-i-1]=x[m-i-1]-=1;}
	z[m-i]=x[m-i]-y[n-i]+48;
	}
	for(i=0;i<m;i++)
		if(z[i]!='0')
		{for(j=0;j<=m-i;j++)
		s[j]=z[i+j];
		break;}
	printf("%s\n",s);
}