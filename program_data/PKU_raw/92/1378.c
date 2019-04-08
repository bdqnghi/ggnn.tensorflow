main()
{
 int n,i,j,k,end1,end2,sum,m;
    int a[1000];
    int b[1000];
    scanf("%d",&n);
    while(n!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    m=a[j+1];
                    a[j+1]=a[j];
                    a[j]=m;
                }
                
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(b[j]>b[j+1])
                {
                    m=b[j+1];
                    b[j+1]=b[j];
                    b[j]=m;
                }
                else
                ;
            }
        }
     for(i=j=n-1,end1=end2=0;j>=end2&&i>=end1;j--)
     {
         if(a[i]>b[j])
         {
             sum++;
             i--;
         }
         else if(a[i]<b[j])
         {
             sum--;
             end1++;
         }
         else
         {
             if(a[end1]>b[end2])
             {
                 sum++;
                 end1++;
                 end2++;
                 j++;
             }
             else if(a[end1]<b[end2])
             {
                 sum--;
                 end1++;
             }
             else
             {
                 if(a[end1]==b[j])
                 {
                     end1++;
                 }
                  else
                 {
                     sum--;
                     end1++;
                 }
             }
         }
     }
     printf("%d\n",200*sum);
     scanf("%d",&n);
    }

 
} 