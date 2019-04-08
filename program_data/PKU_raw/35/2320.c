int test(int a[8][8],int x,int y,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(a[x][i]<a[x][y])
			return 0;
	return 1;
}
int main()
{
	int m,n,i,j,k=0,a[8][8]={0},s=0,p=0,q=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		s=a[i][0];
		for(j=1;j<n;j++)
		{
			if(a[i][j]>s)
			{s=a[i][j];q=j;}
		}
		if(test(a,i,q,n))
		{
			printf("%d+%d",p,q);
			k++;
			break;
		}
	}
	if(!k) printf("No");
	return 0;
}