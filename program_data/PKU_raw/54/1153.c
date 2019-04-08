void main()
{
	int apple(int m,int n,int k);
	int m,n,k,i;
	scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{
		m=i;
		m=apple(m,n,k);
		if(m!=0){printf("%d\n",m);break;}
	}
}
int apple(int m,int n,int k)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(m%(n-1)==0)m=m*n/(n-1)+k;
		else{m=0;break;}
	}
	return(m);
}