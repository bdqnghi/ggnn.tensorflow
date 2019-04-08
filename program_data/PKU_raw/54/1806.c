void main()
{
	int f1(int m,int n,int k);
	int n,m,i,j,k;
	scanf("%d%d",&n,&k);
	for(m=1;;m++)
	{
		j=f1(m,n,k);
		if(j==1){printf("%d",m);break;}
	}
	
}

int f1(int m,int n,int k)
{
	int j,r,a,b,jihao=0,i;
	for(i=0;i<n;i++)
	{
		a=m%n;
		if(a!=k){jihao=1;break;}
		m=m/n;
		m=m*(n-1);
	}
	if(m<n-1)jihao=1;
	if(jihao==1)return 0;
	else return 1;
	
}