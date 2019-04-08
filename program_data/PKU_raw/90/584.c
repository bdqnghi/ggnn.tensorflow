
int main()
{
	int empty (int m,int n);
	int full (int m,int n);
	int i;int n;int num[20][2];int z[20];
	
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
	scanf("%d %d",&num[i][1],&num[i][0]);
    z[i]=full(num[i][0],num[i][1])+empty(num[i][0],num[i][1]);
	}
	for(i=0;i<=n-1;i++)
	printf("%d\n",z[i]);
	return 0;
}
int full (int m,int n)
{
	int empty (int m,int n);
	int result;
	if(m<n) result=full(m,n-m)+empty(m,n-m);
	if(m==n) result=1;
	if(m>n) result=0;
	return(result);
}
int empty (int m,int n)
{
int result;
if(m==1) result=0;
else result=full(m-1,n)+empty(m-1,n);
return(result);
}
