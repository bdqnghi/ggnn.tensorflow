main()
{
    int i,n,e,f,j,h=0,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
     {
         scanf("%d %d",&e,&f);
         int a[100][100];
         for(i=0;i<e;i++)
          for(j=0;j<f;j++)
           a[i][j]=0;
         for(i=0;i<e;i++)
           for(j=0;j<f;j++)
           scanf("%d",&a[i][j]);
         for(i=0;i<e;i++)
          {
              h=h+a[i][0]+a[i][f-1];
          }
          for(j=1;j<f-1;j++)
           {
               h=h+a[0][j]+a[e-1][j];
           }
          printf("%d\n",h);
          h=0;
          e=0;
          f=0;

     }
}
