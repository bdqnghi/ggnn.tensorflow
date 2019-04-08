int main()
{
	int t,k,j=1,i,n,a[501]={0},b[501];
   cin>>n;
   for(i=1;i<=n;i++)
   {
	   cin>>a[i];
	   if(a[i]%2!=0)
	   {
		   b[j]=a[i];
		   j++;
	   }
      
   }
   for(i=1;i<=j-2;i++)
     for(k=1;k<=j-i-1;k++)
	 {
		 if(b[k]>b[k+1])
		 {
			 t=b[k];
		    b[k]=b[k+1];
			b[k+1]=t;
         }
	 }
   for(i=1;i<=j-1;i++)
	   if(i==1)cout<<b[i];
	   else
	   cout<<","<<b[i];
	 return 0;
}