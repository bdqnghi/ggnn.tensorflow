
void mk(void)
{
	int m,n,i,j,k,s=0;
	int a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
	
	for(i=0;i<n;i++)
	{ 
		s+=a[0][i];
	}
	for(j=1;j<m;j++)
	{
		s+=a[j][n-1];
	}
    if(m!=1)
	for(k=n-2;k>=0;k--)
	{
		
		s+=a[m-1][k];
	}
    if(n!=1)
	for(i=m-2;i>0;i--)
	{
		s+=a[i][0];
	}
	printf("%d\n",s);
}



int main()
{
	int p,q,i;
	scanf("%d",&p);
	for(q=0;q<p;q++)
	{
		mk();
	}
	return 0;
}
