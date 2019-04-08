
int main(){
   int m,n,array[21][21],i,j;
   cin>>m>>n;
   for(i=1;i<=m;i++)
	   for(j=1;j<=n;j++)
		   cin>>array[i][j];
   if(array[1][1]>=array[1][2]&&array[1][1]>=array[2][1])
	   cout<<0<<' '<<0<<endl;
   for(i=2;i<n;i++)
	   if(array[1][i]>=array[1][i-1]&&array[1][i]>=array[1][i+1]&&array[1][i]>=array[2][i])
		   cout<<0<<' '<<i-1<<endl;
   if(array[1][n]>=array[1][n-1]&&array[1][n]>=array[2][n])
	   cout<<0<<' '<<n-1<<endl;
   for(i=2;i<m;i++)
   	   for(j=1;j<=n;j++)
   	   {
   		   if(j==1)
   			   if(array[i][1]>=array[i-1][1]&&array[i][1]>=array[i+1][1]&&array[i][1]>=array[i][2])
   				   cout<<i-1<<' '<<0<<endl;
   		   if(j==n)
   			   if(array[i][n]>=array[i-1][n]&&array[i][n]>=array[i+1][n]&&array[i][n]>=array[i][n-1])
   			   		cout<<i-1<<' '<<n-1<<endl;
   		   if(j!=1&&j!=n&&array[i][j]>=array[i][j+1]&&array[i][j]>=array[i][j-1]&&array[i][j]>=array[i+1][j]&&array[i][j]>=array[i-1][j])
   			   cout<<i-1<<' '<<j-1<<endl;

   	   }
   if(array[m][1]>=array[m][2]&&array[m][1]>=array[m-1][1])
	   cout<<m-1<<' '<<0<<endl;
   for(i=2;i<n;i++)
	   if(array[m][i]>=array[m][i-1]&&array[m][i]>=array[m][i+1]&&array[m][i]>=array[m-1][i])
		   cout<<m-1<<' '<<i-1<<endl;
   if(array[m][n]>=array[m][n-1]&&array[m][n]>=array[m-1][n])
	   cout<<m-1<<' '<<n-1<<endl;
   return 0;
}
