int main()
{
   int n,i,j,k,r,c;
   float a[10][3],b[11][11],sum,max;
   cin>>n;
   for(i=0;i<n;i++)
   {
	 for(j=0;j<3;j++)
         cin>>a[i][j];
   }
   for(i=0;i<n-1;i++)
    {
       for(k=i+1;k<n;k++)
      { 
        sum=0;
        for(j=0;j<3;j++)
        {
          sum=sum+(a[i][j]-a[k][j])*(a[i][j]-a[k][j]);
         }
        b[i][k]=sqrt(sum);
      }
   }
   for(j=0;j<(n-1)*n/2;j++)
  {
	 max=0;
	 for(i=0;i<n-1;i++)
	 {
		 for(k=i+1;k<n;k++)
		 {
		     if(b[i][k]>max)
			 {
		           max=b[i][k];
	                   r=i;
			   c=k;
	                 }
		  } 
	 }
     b[r][c]=0;   
     cout<<'('<<a[r][0]<<','<<a[r][1]<<','<<a[r][2]<<')'<<'-'<<'('<<a[c][0]<<','<<a[c][1]<<','<<a[c][2]<<')'<<'=';
     printf("%.2f\n",max);
   } 
   return 0;
}