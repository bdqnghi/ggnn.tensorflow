//???????
int main()
{
    int k,m,n,a[101][101],i,j,t,sum=0;
	cin>>k;
	for(i=0;i<k;i++)
	{
		sum=0;
		cin>>m>>n;
	   for(j=1;j<=m;j++)
	   {
	     for(t=1;t<=n;t++)
		 {
		   cin>>a[j][t];//????
		 }
	   }
            if(m==1&&n==1) sum=a[1][1];
           else
	   for(j=1;j<=m;j++)
	   {
	   sum=sum+a[j][1];
	   sum=sum+a[j][n];
	   }
	   for(t=2;t<n;t++)
	   {
	    sum=sum+a[1][t];
		sum=sum+a[m][t];
	   }//?????
	   cout<<sum<<endl;//??
	}
	
	return 0;

}