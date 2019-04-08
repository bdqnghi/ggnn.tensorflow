int main()
 {int n,m,i=0;
 cin>>n;
 for(i=1;i<=n;i++)
  { int a[100][100],j,k,l,sum=0;
    for(k=0;k<=n-1;k++)
     for(l=0;l<=n-1;l++)
      cin>>a[k][l];
   for(j=1;j<=n-1;j++)
    {
     for(k=0;k<=n-j;k++)
     { int min=a[k][0];
       for(l=1;l<=n-j;l++)
        if(a[k][l]<min)
           min=a[k][l];
       for(l=0;l<=n-j;l++)
          a[k][l]=a[k][l]-min;
     }
    for(k=0;k<=n-j;k++)
     { int min=a[0][k];
        for(l=1;l<=n-j;l++)
         if(a[l][k]<min)
           min=a[l][k];
        for(l=0;l<=n-j;l++)
         a[l][k]=a[l][k]-min;
     }
    sum=sum+a[1][1];
    for(k=2;k<=n-j;k++)
     { a[0][k-1]=a[0][k];
       a[k-1][0]=a[k][0];
     }
   for(k=2;k<=n-j;k++)
    for(l=2;l<=n-j;l++)
     a[k-1][l-1]=a[k][l];
     }
   cout<<sum<<endl;
    }
return 0;
}