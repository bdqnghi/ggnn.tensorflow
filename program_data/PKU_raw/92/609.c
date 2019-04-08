
void paixu(int a[],int n)
{
     int i,j,t;
     for(i=0;i<n-1;i++)
     {
      for(j=i+1;j<n;j++)
      {
       if(a[i]<a[j])
       {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;

               }
               }
               }//for(i=0;i<n;i++)printf("%d ",a[i]);printf("\n");
               
 }
long int most(int a[],int b[],int n)
{
    int i,j,v=0,m=0,k,f,p,l=n-1;
    for(i=0;i<n;i++)
     {
       if(b[i]>a[i]) v++;
       else if(b[i]<=a[i])
       {
            for(j=l;j>=i;j--)
            {
              if(b[j]<=a[j]) 
              {
                 l=j;
                 break;
                 }
                 }
            p=b[l];
            for(k=l;k>=i+1;k--)
            {
               b[k]=b[k-1];
               }
            b[i]=p;   
            if(b[i]==a[i]) m++;
            }
            }
            f=n-v-m;
    return(200*(v-f));
}
main()
{
      int n=1,a[1000],b[1000],j,i;
      long int k;
      for(;n!=0;)
      {
           scanf("%d",&n); 
           for(j=0;j<n;j++)
            scanf("%d",&b[j]);
           for(j=0;j<n;j++)
            scanf("%d",&a[j]);
           paixu(a,n);
           paixu(b,n);
           k=most(a,b,n);
           if(n)
           printf("%ld\n",k);
           }
      
      }
