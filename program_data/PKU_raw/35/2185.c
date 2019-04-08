int main()
{
	int m,n,i,j,a[8][8],p=0,q=0,mark=1;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
	{scanf("%d",&a[i][j]);}}
	for(j=0;j<n;j++)
	{
		if(a[0][j]>a[0][p])
			p=j;
	}
	for(i=0;i<m;i++)
	{
		if(a[i][p]<a[q][p])
			q=i;
	}
	for(j=0;j<n;j++)
	{
		if(a[q][j]>a[q][p])
		{
			printf("No");
			mark=0;
			break;
		}
	}
	if(mark)
		printf("%d+%d",q,p);
	return 0;
}


