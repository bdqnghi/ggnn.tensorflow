int main()
{
  int x , y , n , i , j , l , max ;
  char c ;
  n = 0 ;
  int m[1000]={0};
  for ( i=0 ; ; i++ )
  {
   if (i%2==0)
     {
       cin>>x;
       m[i/2]= x;
       n++;
     }
   else
    {
      c=cin.get();
      if (c==',')
        {
          continue;
        }
      else
        {
          break;
        }
    }
  }
  int a[n] , b[n] , t[n] ;
  for ( i=0 ; i<=n-1 ; i++ )
   {
     a[i]=m[i];
   }
  for ( i=0 ; i<=2*n-2 ; i++ )
   { 
     if (i%2==0)
      {
        cin>>y;
        b[i/2]=y;
      }
     else
      {
        c=cin.get();
      }
   }
  for ( i=0 ; i<=n-1 ; i++ )
   {
     l=0 ;
     for ( j=0 ; j<=n-1 ; j++)
       {
         if ((a[i]>=a[j])&&(a[i]<b[j]))
           {
             l++ ;
           }
        }
     t[i]=l;
    }
  max=t[0];
  for ( i=1 ; i<=n-1 ; i++)
   {
    if ( t[i]>max)
     {
       max=t[i];
     }
   }
  cout<<n<<" "<<max;
 return 0; 
}
  
  
  