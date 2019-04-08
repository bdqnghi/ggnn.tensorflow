int main()
{
	int l,m,n,k,i,j,sum,p,q;
	int s[150][150]={0};
	int a[150][150]={0};
	scanf("%d %d",&m,&n);
	for (i=0;i<m;i++)
	 for (j=0;j<n;j++) 
     {
         scanf("%d",&a[i][j]);
         s[i][j]=1;
         }
	 sum=m*n;i=0;j=0;p=0;q=1;
	 while (sum>0)
	 {
           k=0;
           while (s[i][j]==1)
           {
                 printf("%d\n",a[i][j]);
                 s[i][j]=0;sum--;
                 i+=p;
                 j+=q;
                 }
         if ((p==0)&&(q==1)&&(k==0)) 
         {
                           p=1;
                           q=0;
                           i=i+1;
                           j=j-1;
                           k=1;
                           }
                           
         if ((p==1)&&(q==0)&&(k==0))
         {
              p=0;
              q=-1;
              i=i-1;
              j=j-1;k=1;
              }
         if ((p==0)&&(q==-1)&&(k==0))
         {
                           p=-1;
                           q=0;
                           j=j+1;
                           i=i-1;k=1;
                           }
         if ((p==-1)&&(q==0)&&(k==0))
         {
                           p=0;
                           q=1;
                           j=j+1;
                           i=i+1;
                           k=1;
                           }
                           }

return 0;
}
