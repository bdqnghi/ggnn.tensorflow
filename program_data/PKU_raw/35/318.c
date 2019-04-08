int max(int A[9],int n);
int min(int B,int num,int C[][9],int m);
void main()
{
	int m,n, a[9][9],i,j,flag=0,ma;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		ma=max(a[i],n);
	if(min(a[i][ma],ma,a,m)==1)
	{
		printf("%d+%d",i,ma);
		flag=1;
	}
	}
	if(flag==0)
		printf("No");

}
int max(int A[9],int n)
{
	int p=0,maxnum=0;
	for(p=0;p<n;p++)
		if(A[p]>A[maxnum])
			maxnum=p;
		return(maxnum);
}
int min(int B,int num,int C[][9],int m)
{
  int minvalue=B,i,blag=1;
	  for(i=0;i<m;i++)
		  if(C[i][num]<B)
		  {
			  blag=0;return(0);
		  }
		  return(blag);

}
