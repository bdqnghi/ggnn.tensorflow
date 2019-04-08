main()
{
         int n,k;
         int i=0;
         int m=0;
         int s=0;
         int a[100000];
         scanf("%d",&n);
         for(i;i<n;i++)
         {
                  scanf("%d",&a[i]);
                  m++;
         }

         scanf("%d",&k);
         while (s!=m)
         {
                  if(a[s]==k)
                  {
                           m--;
                           i=s;
                           for(i;i<m;i++)
                           {a[i]=a[i+1];}
                  }
                  else s++;
         }
         printf("%d",a[0]);
         for(i=1;i<m;i++)
         printf(" %d",a[i]);

}
