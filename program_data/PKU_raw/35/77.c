int m,n;
int max(int a[])
{
	int max,i;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return(max);
}
int min(int a[])
{
	int min,i;
	min=a[0];
	for(i=1;i<m;i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	return(min);
}
void main()
{
	int i,j,a[8][8]={0},b[8],k,s=0,q,r;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<8;i++)
		b[i]=0;
	for(i=0;i<m;i++)
		b[i]=max(a[i]);
	k=min(b);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i][j]==k)
			{
				q=i;
				r=j;
				break;
			}
	for(i=0;i<m;i++)
	{
		if(a[i][r]>k)
			s=s+1;
	}
	if(s==m-1)
		printf("%d+%d\n",q,r);
	else if(s!=m-1)
		printf("No\n");
}