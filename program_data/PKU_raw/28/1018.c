int main()
{       char a[1000],*aa[1000];
        int b[1000];
        int i,n=0;
        gets(a);
        aa[n++]=a;
        for(i=0;a[i];i++)
        {
        if(a[i]==' ')
        {
                   a[i]=0;
                   aa[n++]=i+a+1;
                   }
                                 }
        for(i=0;i<n;i++)
        { if(i<n-1)
         {
         b[i]=strlen(aa[i]);
         if(b[i]>0)
         {
         printf("%d,",b[i]);
         }
         }
         else if(i==n-1)
         {    b[i]=strlen(aa[i]);
         if(b[i]>0)
         {
                  printf("%d",b[i]);
                  }
         }              
         }
           return 0;
}
