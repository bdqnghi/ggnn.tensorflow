
main()
{
      int n,i,j,c,a[100000],b[100000],m[10000]={0},p[10000]={0},k=-1;
      scanf("%d",&n);
      for(i=0; ;i++)
      {
               
               scanf("%d %d",&a[i],&b[i]);
               k++;
                if(a[i]==0&&b[i]==0)
                break;
                
      }
      
      for(i=0;i<k;i++)
      {
          m[a[i]]++;
                p[b[i]]++;            
                }      
            
     for(j=0;j<n;j++)
     {
          c=j;           
          if(m[j]==0&&p[j]==(n-1))
         { printf("%d\n",c);
          break;}
          }
    if(j==n)

          printf("NOT FOUND");
          
          
    getchar();getchar();getchar();getchar();
}    