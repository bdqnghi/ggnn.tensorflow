void paixu(int*p,int k);
int saima(int*p,int*q,int k);
main()
{
      int tian[2020],qi[1010];
      int n,i,j,k,m,max;
      for(;;)
      {
             scanf("%d",&n);
             if(n!=0)
             {
                     for(i=0;i<n;i++)
                     scanf("%d",&tian[i]);
                     for(j=0;j<n;j++)
                     scanf("%d",&qi[j]);
                     paixu(tian,n);
                     paixu(qi,n);
                     max=-n;
                     for(k=0;k<n;k++)
                     tian[n+k]=tian[k];
                     for(i=0;i<n;i++)
                     {
                          m=0;
                          for(j=0;j<n;j++)
                          {
                                if(tian[j+i]>qi[j])
                                m=m+1;
                                if(tian[j+i]<qi[j])
                                m=m-1;
                          }
                          if(m>max)
                          max=m;
                     }
                     printf("%d\n",200*max);
             }
             else
             break;
      }

}
void paixu(int*p,int k)
{
     int i,j,t;
     for(i=0;i<k-1;i++)
     {
          for(j=0;j<k-1-i;j++)
          {
                if (p[j]<p[j+1])
                {
                       t=p[j];
                       p[j]=p[j+1];
                       p[j+1]=t;
                }
          }
     }
}
