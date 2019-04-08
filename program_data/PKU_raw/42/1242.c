main()
{
    int n,m,i,j,k=0;
    int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     scanf("%d",&m);
     for(i=0;i<n;i++)
      {
          if(a[i]!=m)
          k++;
      }
      for(i=0;i<n;i++)
       {
           if(a[i]!=m)
           {
                printf("%d",a[i]);
                k--;
                if(k>0)
                printf(" ");

           }

       }

}
