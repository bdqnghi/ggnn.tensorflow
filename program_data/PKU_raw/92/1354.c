void p(int masu[],int n)
{
     int i,j,t;
     for(i=1;i<=n;i++)
     {
         for(j=n-1;j>=i;j--)
         {
             if(masu[j-1]>masu[j])
             {
                t=masu[j-1];
                masu[j-1]=masu[j];
                masu[j]=t;                     
             }                  
         }                
     }
}
main()
{
      for(;;)
      {
          int n,a[1100],b[1100],i,j,sub=0,x,y,k;
          scanf("%d",&n);
          if(n==0) {break;}
          else
          { 
               for(i=0;i<n;i++)
                   scanf("%d",&a[i]);
               for(i=0;i<n;i++)
                   scanf("%d",&b[i]);
               p(a,n),p(b,n);
               x=n-1,y=n-1,i=0,j=0;
               for(;;)
               {
                   
                      if(a[i]>b[j]) {sub=sub+1;i=i+1;j=j+1;}
                      else if(a[i]==b[j])
                      {
                           if(a[x]<=b[y])
                           {
                           if (a[i]<b[y]){sub=sub-1;}
                           i++;y--;
                           }
                           else {sub=sub+1,x=x-1,y=y-1;}             
                      }
                      else if(a[i]<b[j])
                      {
                          i=i+1;
                          y=y-1;
                          sub=sub-1;            
                      }
                      if (i>x)break;
               }
               printf("%d\n",200*sub);
          } 
      }

}
