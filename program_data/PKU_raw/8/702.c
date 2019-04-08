int a[100],b[100],n,m;
 void shuru( void);
    void paixu( void);
    void hebing( void);
    void shuchu( void);
int main()
{
   
    shuru( );
    paixu( );
    hebing( );
    shuchu( );
    return 0;
}
     void shuru(void )
     {
         int x,y;
         cin >>x>>y;
         int i;
         for(i=0;i<x;i++)
         cin >>a[i];
         for(i=0;i<y;i++)
         cin >>b[i];
         n=x;
         m=y;
         }
     void paixu(void )
     {
         int i,j,t;
         for(i=0;i<n-1;i++)
         for(j=i;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 t=a[i];a[i]=a[j];a[j]=t;
                 }
                 }
         for(i=0;i<m-1;i++)
         for(j=i;j<m;j++)
         {
            if(b[i]>b[j])
            {
                 t=b[i];b[i]=b[j];b[j]=t;
                 }
                 }
         }
     void hebing( void)
     {
          int i;
          for(i=n;i<m+n;i++)
          a[i]=b[i-n];
          }
     void shuchu(void )
     {
          int i;
          for(i=0;i<m+n-1;i++)
          cout<<a[i]<<" ";
          cout<<a[m+n-1];
          }