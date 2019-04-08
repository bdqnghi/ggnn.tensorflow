int main()
{
int *a,sum,i,k,n,m,j=0;
scanf("%d",&k);
for (i=1;i<=k;i++)
{
	sum=0;
	scanf("%d%d",&m,&n);
	a=(int*)malloc(sizeof(int)*(n*m));
	for(j=0;j<n*m;j++)
	{
		scanf("%d",a+j);
		if ((j+1<=n)||(j>(n*m-n-1))||((j+1)%n==1)||((j+1)%n==0))
			sum+=*(a+j);
	}
         free(a);
	printf("%d\n",sum);
}

}
