int main()
{
  int m , n , i , j , x , t , num ;
  cin>>m>>n;
  num = m*n;
  int a[m][n];
  for ( i=0;i<=m-1;i++ )
   {
     for ( j=0;j<=n-1;j++ )
      {
        cin>>x;
        a[i][j]=x;
      }
    }
  t=0;
 while (num!=0)
 {
  if ((t%4==0)&&(num!=0))
   {
     for( j=0;j<=n-1;j++ )
      {
        num--;
        if ( num!=0)
        {
        cout<<a[0][j]<<endl;
        }
        else
        {
        cout<<a[0][j];
        }
      }
    for (i=0;i<=m-2;i++)
      {
        for (j=0;j<=n-1;j++)
        {
        a[i][j]=a[i+1][j];
        }
      }
     m--;
     t++;
    }
   if ((t%4==1)&&(num!=0))
   {
    for ( i=0;i<=m-1;i++ )
     {
       num--;
       if (num!=0)
       {
       cout<<a[i][n-1]<<endl;
       }
       else
       {
        cout<<a[i][n-1];
        }
     }
    n--;
    t++;
    }
    if ((t%4==2)&&(num!=0))
    {
      for (j=n-1;j>=0;j-- )
       {
         num--;
         if (num!=0)
         {
         cout<<a[m-1][j]<<endl;
         }
         else
         {
         cout<<a[m-1][j];
         }
       }
      m--;
      t++;
    }
    if ((t%4==3)&&(num!=0))
   {
     for( i=m-1;i>=0;i--)
      {
        num--;
        if (num!=0)
       {
        cout<<a[i][0]<<endl;
       }
        else
       {
        cout<<a[i][0];
       }
      }
    for (j=0;j<=n-2;j++)
      {
       for ( i=0;i<=m-1;i++ )
        {
        a[i][j]=a[i][j+1];
        }
      }
     n--;
     t++;
    }
  }
return 0;
}