int max(int *p,int n)
{
	int i=0,j;
	for (j=1;j<n;j++)
		if (*(p+j)>*(p+i))
			i=j;
	return(i);
}
int min(int *p,int n,int m)
{
	int i;
	for (i=0;i<m;i++)
		if (*(p+i*n)<*p)
			break;
	if (i==m)
		return(1);
	else 
		return(-1);
}
void main()
{
	int a[8][8],m,n,i,j,t,k=0;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<m;i++)
	{
		t=max(*(a+i),n);
		if (min(*(a+i)+t,8,m)==1)
		{
			printf("%d+%d\n",i,t);
			k=1;
		}
		else;
		if (k==1)
			break;
	}
	if (k==0)
		printf("No\n");
}
