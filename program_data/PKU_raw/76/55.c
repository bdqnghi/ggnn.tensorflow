int main()
{
    int n,j,i,k,m,a,t;
    int s[1300][2];
    scanf("%d",&n);m=0;
    for (i=0;i<n;i++) 
    scanf("%d %d",&s[i][1],&s[i][2]);
     for (i=0;i<n;i++)
      for (j=i+1;j<n;j++)
      if (s[i][1]>s[j][1])
      {
                          a=s[i][1];
                          s[i][1]=s[j][1];
                          s[j][1]=a;
                           a=s[i][2];
                          s[i][2]=s[j][2];
                          s[j][2]=a;
                          }
      t=s[0][2];                    
      for (i=0;i<n-1;i++)
      if (t<s[i+1][1]) 
      {
                           printf("no");
                           exit(0);
                           }
      else if (t<s[i+1][2]) t=s[i+1][2];
           printf("%d %d",s[0][1],t);
 
                 return 0;
                 }
                
