int findmax(int *p)
{	int i,t=0;
	for(i=0;i<5;i++)
	{
		if(*(p+t)<*(p+i))t=i;
	}
	return (t);	
}
int dmin(int a[5][5],int c,int r)
{	int i;
	for(i=0;i<5;i++)
	{
		if(a[i][c]<a[r][c])return 0;
	}
	return 1;
}
void main()
{
	int i,j,a[5][5],b[5],k=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		if(dmin(a,b[i]=findmax(a[i]),i)){printf("%d %d %d",i+1,b[i]+1,a[i][b[i]]);k++;}
	}
			
	if(k==0) printf("not found");
}