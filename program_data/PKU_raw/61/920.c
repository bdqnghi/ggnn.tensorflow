main()
{
     int n,i,j,m;
     int a[999];
     for(i=0;i<999;i++)
     a[i]=0;
     scanf("%d",&n);     
     for(i=1;i<=n;i++)
     {
          scanf("%d",&m);
          a[0]=1;a[1]=1;
          for(j=2;j<m;j++)
          a[j]=a[j-2]+a[j-1];
          printf("%d\n",a[m-1]);           
     }
} 