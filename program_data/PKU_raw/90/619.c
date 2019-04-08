int f(int m,int n)
{
	int sum;
	if(n==1||m==0||m==1)sum=1;
	else if(m>=n&&n>0){
		sum=f(m,n-1)+f(m-n,n);
	}else if(m<n&&m>=0){
		sum=f(m,n-1);
	}
	return(sum);
}
int main()
{
	int x,i;
	scanf("%d\n",&x);
	int m[x],n[x];
	for(i=0;i<x;i++)
	{
		scanf("%d %d\n",&m[i],&n[i]);
	}
	for(i=0;i<x;i++)printf("%d\n",f(m[i],n[i]));
}