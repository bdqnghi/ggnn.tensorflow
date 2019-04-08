
void main()
{
	int a[252]={0},b[251]={0};
	char c[250],d[250];
	int temp;
	scanf("%s",c);
	int i,j,m;
	for(i=strlen(c)-1,j=0;i>=0;i--,j++)
	{
		a[j]=c[i]-'0';
	}
	scanf("%s",d);
    for( i=strlen(d)-1,j=0;i>=0;i--,j++)
	{
		b[j]=d[i]-'0';
	}
	for( m=0;m<=250;m++)
	{
		temp=a[m]+b[m];
		a[m]=temp%10;
		a[m+1]=a[m+1]+temp/10;
	}
	for( m=251;m>=1;m--)
	{
		if (a[m]!=0)
		{
			break;
		}
	}
	for (m;m>=0;m--)
	{
		printf("%d",a[m]);
	}
}
