int main()
{
   int n,i,j,k=0,l;
   double B[10][10],a,C[91]={0},A[10][3];
   cin>>n;
   for (i=0;i<n;i++)
      cin>>A[i][0]>>A[i][1]>>A[i][2];    
   for (i=0;i<n-1;i++)
   {
      for (j=i+1;j<n;j++)
      {
         B[i][j]=sqrt((A[i][0]-A[j][0])*(A[i][0]-A[j][0])+(A[i][1]-A[j][1])*(A[i][1]-A[j][1])+(A[i][2]-A[j][2])*(A[i][2]-A[j][2]));        
         C[k]=B[i][j];
		 k=k+1;
      }
   }
   for (i=0;i<n*(n-1)/2;i++)
   {
      for (j=0;j<n*(n-1)/2-1;j++)
	  {
	    if (C[j]<C[j+1])
		{
		  a=C[j];
		  C[j]=C[j+1];
		  C[j+1]=a;
		}
	  }
   }
   for (i=0;i<n*(n-1)/2;i++)
   {
      for (k=0;k<n-1;k++)
	  {
		  for (l=k+1;l<n;l++)
		  {
	         if (B[k][l]==C[i])
			 {
				   cout<<fixed<<setprecision(0)<<"("<<A[k][0]<<","<<A[k][1]<<","<<A[k][2]<<")"<<"-"<<"("<<A[l][0]<<","<<A[l][1]<<","<<A[l][2]<<")"<<"=";
			   	   cout<<fixed<<setprecision(2)<<B[k][l]<<endl;
				   B[k][l]=0;
			 }
		  }
	  }
   }
   return 0;
}