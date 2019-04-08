/*
 * fx11.cpp
 *
 *  Created on: 2013-1-12
 *      Author: SONY
 *      ????
 */
int main(){
   int m,n;
   cin>>m>>n;
   int a[m][n],i,j;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
           cin>>a[i][j];
	   }
   }
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   int k=0;
		   if(i+1<m && a[i+1][j]<=a[i][j]) k++;
		   if(j+1<n && a[i][j+1]<=a[i][j]) k++;
		   if(i-1>=0 && a[i-1][j]<=a[i][j]) k++;
		   if(j-1>=0 && a[i][j-1]<=a[i][j]) k++;
		   if((i==0 && j==0)|| (i==0 && j==n-1)||(i==m-1&&j==0) ||(i==m-1 && j==n-1))
		   {
			   if(k==2) cout<<i<<" "<<j<<endl;
		   }
		   else{
			   if(i==0|| j==0 || i==m-1 || j==n-1)
		      {
			    if(k==3)  cout<<i<<" "<<j<<endl;
		       }
		      else {
		    	  if(k==4) cout<<i<<" "<<j<<endl;
		      }
	   }
   }
   }
return 0;
}
