int main()
{
 int a[5][5];
 int i , j , x , l , n , max ;
 for ( i=0;i<=4;i++ )
  {
    for ( j=0;j<=4;j++ )
     {
       cin>>x;
       a[i][j]=x;
     }
   }
 l=0;
 for ( i=0;i<=4;i++)
  {
   max=a[i][0];
   n=0;
   for ( j=1;j<=4;j++ )
    {
      if (a[i][j]>a[i][n])
       {
        n=j;
       }
     }
   if ((a[i][n]<=a[0][n])&&(a[i][n]<=a[1][n])&&(a[i][n]<=a[2][n])&&(a[i][n]<=a[3][n])&&(a[i][n]<=a[4][n]))
   {
    cout<<i+1<<" "<<n+1<<" "<<a[i][n]<<endl;
    l++;
   }
  }
 if (l==0)
  {
   cout<<"not found"<<endl;
  }
 return 0;
}
 