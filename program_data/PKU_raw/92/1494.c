main()
{
      int n,i,j,t,c;
      int a[1010],b[1010];
      scanf("%d",&n);
      while (n!=0)
      {     int win=0;
            int lose=0;
            int equal=0;
            for (i=0;i<=n-1;i++)
            {
                scanf("%d",&a[i]);
            }
            for (i=0;i<=n-1;i++)
            {
                scanf("%d",&b[i]);
            }
            for (i=n-2;i>=0;i--)
            {
                for (j=0;j<=i;j++)
                {
                    if (a[j]>a[j+1])
                    {
                                    t=a[j+1];
                                    a[j+1]=a[j];
                                    a[j]=t;
                    }
                }
            }
            for (i=n-2;i>=0;i--)
            {
                for (j=0;j<=i;j++)
                {
                    if (b[j]>b[j+1])
                    {
                                    t=b[j+1];
                                    b[j+1]=b[j];
                                    b[j]=t;
                    }
                }
            }
            
           for (i=0;i<=n-1;i++)
           {
               t=0;
               for (j=0;j<=n-1;j++)
               {   
                   if (b[j]==100000)
                   {
                                continue;
                   }
                   else
                   {
                       if (a[i]-b[j]>0)
                       {
                               t=j;
                       }
                   }
               }
               if (a[i]-b[t]>0)
               {
                       win++;
                       b[t]=100000;
                       a[i]=-2;
               }
           }
           for (i=0;i<=n-1;i++)
           {
             if(a[i]==-2)
             {
                continue;
             }
             else
             {
                 c=0;
                 t=0;
                 for (j=0;j<=n-1;j++)
                 {
                     if (b[j]==100000)
                     {
                                 continue;
                     }
                     else
                     {
                         if(a[i]==b[j])
                         {
                                       a[i]=-2;
                                       b[j]=100000;
                                       equal=equal+1;
                                       break;
                         }               
                     }  
                 }
             }
           } 
              lose=n-win-equal;
              int money;
              money=(win-lose)*200;
              printf("%d\n",money);                
              scanf("%d",&n);
   }
   getchar();getchar();getchar();getchar();getchar();
}
            
