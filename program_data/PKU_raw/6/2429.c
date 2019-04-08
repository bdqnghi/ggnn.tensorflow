int main()
{
	//int array_edge_sum(int * b,int m,int n);
	int i,j,t,r,k,m,n,a[1000]={0},b[100][100]={0},sum=0;
    scanf("%d",&k);
	
	for(i=0;i<k;i++){
		scanf("%d%d",&m,&n);
		
		for(t=0;t<m;t++){
			for(r=0;r<n;r++){
				scanf("%d",&b[t][r]);
			    if(r==n-1) scanf("\n");} 
	}
		if(m==1) 
			for(j=0;j<=n-1;j++)
				sum+=b[0][j];
	else if(n==1)
		for(j=0;j<=m-1;j++)
				sum+=b[j][0];
	else
   {
	for(j=0;j<n-1;j++)
		sum+=*(b[0]+j);
    for(j=0;j<m-1;j++)
		sum+=*(b[j]+n-1);
	for(j=n-1;j>0;j--)
		sum+=*(b[m-1]+j);
    for(j=m-1;j>0;j--)
		sum+=*(b[j]+0);
   }		
	a[i]=sum;
	sum=0;
	}
	
	for(i=0;i<k;i++)
		printf("%d\n",a[i]);
}