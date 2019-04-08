main()
{
 int a[10000],n,d=0,b[10000][2];
 scanf("%d",&n);
 for(int i=2;i<=n;i++)
               {
                int c=0;
                for(int j=2;j<=i;j++)
                     {                      
                      if(i%j==0&&i!=j)
                      c++;              
                     }
                if(c==0)
                {d++;
                a[d]=i;}
               }
 int e=0;
 for(int i=1;i<=d;i++)
        {
         for(int j=1;j<=d;j++)
                    {
                     if((a[j]-a[i])==2)
                             {
                              e++;
                              b[e][1]=a[i];
                              b[e][2]=a[j];
                             }
                    }             
        }
 if(e==0)
 printf("empty");
 else
      {
       for(int i=1;i<=e;i++)
       printf("%d %d\n",b[i][1],b[i][2]);
      }
 getchar();
 getchar();
}