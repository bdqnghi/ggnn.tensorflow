int main()
{
int i , j , n , t , m , x , l;
int a[15];
for ( m =1 ; ;m++)
{
  for ( x=1 ; x<=16 ; x++)
  {
    cin>>l;
    if (l!=0)
    {
      a[x-1]=l;
    }
    else
    {
      n = x - 1;
      t = 0 ;
      for ( i=0 ; i<=n-2 ; i++)
       {
         for ( j=i+1 ; j<=n-1 ; j++)
          {
           if ((a[i]==2*a[j])||(a[j]==2*a[i]))
           t++;
          }
        }
      cout<<t<<endl;
      break;
     }
   }
 }
return 0;
}