

int main()
{
    
    int row,col;
    cin>>row>>col;
    
    cout<<dec;
    int a[101][101];
    for (int i=1;i<=row;i++) 
        for (int j=1;j<=col;j++)
            cin>>a[i][j];
   
    for (int i=1;i<=row/2 && i<=col/2;i++)
    {
          for (int j=i;j<=col-i;j++) cout<<a[i][j]<<endl;
          for (int j=i;j<=row-i;j++) cout<<a[j][col-i+1]<<endl;
          for (int j=col-i+1;j>=i+1;j--) cout<<a[row-i+1][j]<<endl;
          for (int j=row-i+1;j>=i+1;j--) cout<<a[j][i]<<endl;
    }
          
    if (row%2==1 && row<=col) for (int j=row/2+1;j<=col-row/2;j++) cout<<a[row/2+1][j]<<endl;   
    if (col%2==1 && row>col) for (int j=col/2+1;j<=row-col/2;j++) cout<<a[j][col/2+1]<<endl;   
 
    
    return 0;
}
 
