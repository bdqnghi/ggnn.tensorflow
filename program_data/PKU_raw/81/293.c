/* Note:Your choice is C IDE */
void main()
{
	int a[5][5],b,m,n,change(int m,int n),i,j;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&a[i][j]);
	scanf("%d %d",&m,&n);
	if(change(m,n)==0)
	printf("error");
	if(change(m,n)==1)
	{for(i=0;i<5;i++)
	{b=a[m][i];
	a[m][i]=a[n][i];
	a[n][i]=b;}
	
		for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{printf("%d%c",a[i][j],(j!=4)?' ':'\n');
		}}
	
}
int change(int m,int n)
{
	int y;
	if(m>4||n>4)
	y=0;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	y=1;
	return(y);
}
	
    
