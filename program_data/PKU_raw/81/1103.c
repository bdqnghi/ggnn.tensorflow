int a[5][5];
int compare(int x,int y)
{
	if(x>4 ||y>4) return 0;
	else return 1;
}
int main()
{
	int i,j,k,l,m,n;
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&m,&n);
	k=compare(m,n);
	if (k==0) printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			l=a[m][i];
			a[m][i]=a[n][i];
            a[n][i]=l;
		}
	
    for(i=0;i<5;i++)
	{
		printf("%d",a[i][0]);
		for(j=1;j<5;j++)
		{	
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}}
	return 0;
}