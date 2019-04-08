int m[30],n[30],result[30];
int saintseiya(int m,int n)
{
	int z;
	if(m>1&&n>1&&m>=n)
	z=saintseiya(m,n-1)+saintseiya(m-n,n);
	if(m>1&&n>1&&m<n)
		z=saintseiya(m,m);
	if(m==1)
	z=1;
	if(n==1)
	z=1;
	if(m==0)
	z=1;
	return(z);
}
void main()
{
	int i,d;
	scanf("%d",&d);
	for(i=0;i<d;i++)
		scanf("%d%d",&m[i],&n[i]);
	for(i=0;i<d;i++)
	result[i]=saintseiya(m[i],n[i]);
	for(i=0;i<d;i++)
	printf("%d\n",result[i]);
}