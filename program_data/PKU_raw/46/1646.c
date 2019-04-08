int main(){
 int col,row,i,j,a[100][100];
 cin>>row>>col;
 for(i=0;i<row;i++)
	 for(j=0;j<col;j++)
		 cin>>a[i][j];
 for(i=0;(row-2*i>0)&&(col-2*i>0);i++)
	 {for(j=i;j<col-i;j++)
		 cout<<a[i][j]<<endl;
      for(j=i+1;j<row-i;j++)
    	 cout<<a[j][col-i-1]<<endl;
      for(j=col-i-2;j>=i&&row-2*i>1;j--)
    	  cout<<a[row-i-1][j]<<endl;
      for(j=row-i-2;j>i&&col-2*i>1;j--)
    	  cout<<a[j][i]<<endl;
	 }
 return 0;
}