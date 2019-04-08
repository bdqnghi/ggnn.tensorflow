int main()
{
    int i,j,k,n,m,t=0,p=0,q=0;
    scanf("%d,%d",&n,&m);
    int a[n][m],b[n],c[m];
    for(i=0;i<n;i++)
     for(j=0;j<m;j++)
       scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
     {
       for(j=0;j<m;j++)
         c[j]=a[i][j];
       for(j=0;j<m;j++)
       {
          for(k=0;k<n;k++)
           b[k]=a[k][j];
          for(k=0;k<n;k++)
           if(b[k]<a[i][j])
            {
             t=1;
             break;
             }
          for(k=0;k<m;k++)
           if(c[k]>a[i][j])
            {
              p=1;
              break;
            }
          if((p==0)&&(t==0))
           {
           q=1;
           printf("%d+%d\n",i,j);
           }
          p=0;
          t=0;
        }
       }
     if(q==0)
     printf("No\n");  
     return 0;
}