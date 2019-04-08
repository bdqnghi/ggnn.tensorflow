int main()
{
     int n,a[1000][1000],i,j,m=0,k,r1,r2,c1,c2,x=0;
	 scanf("%d\n",&n);
	 for(i=0;i<n;i++)
	 {
		 for(j=0;j<n;j++)
		 {
			 scanf("%d",&a[i][j]);
		 }
	 }
      for(i=0;i<n;i++)
	 {
		 for(j=0;j<n;j++)
		 {
			 if((a[i][j]==0)&&x==0)
			 {
				 r1=i+1;
			 c1=j+1;
			 x=1;}
		 if((a[i][j]==0))
			  {
				  r2=i-1;c2=j-1;}
		 }}
	  printf("%d\n",(r2-r1+1)*(c2-c1+1));
	  return 0;
}