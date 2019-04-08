int judge(int m,int n)
{
	if(m==n||m>4||n>4||m<0||n<0)
		return 0;
	else return 1;
}
void main()
{
	int judge(int m,int n);
	int a[5][5],m,n,b,i,j;
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{scanf("%d",&a[i][j]);}
	}
	scanf("%d",&m);
    scanf("%d",&n);
	if(judge(m,n)==0)
	{printf("error");}
	else {for(j=0;j<5;j++)
	{b=a[m][j];a[m][j]=a[n][j];a[n][j]=b;}
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
		{printf("%d",a[i][j]);
		if(j==4)printf("\n");
		else printf(" ");}}}
}
