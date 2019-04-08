int main()
{
    int n,i,j,k,t=0,c=0;
    int A[25];
    char g[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    struct point{
     int a;
     char s[80];
     }tope[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s",&tope[i].a,tope[i].s);
    }
       for(k=0;k<26;k++)
           {
                 A[k]=0;
        for(i=0;i<n;i++){
        for(j=0;tope[i].s[j]!='\0';j++)
        {
                 if(tope[i].s[j]==g[k])
                {
                    A[k]++;
                }
          }
       }
     }
     for(i=0;i<26;i++)
    {
          if(A[i]>t)
          {
              t=A[i];
              c=i;
          }
    }
    printf("%c\n%d\n",g[c],t);
   for(i=0;i<n;i++)
  {
      for(j=0;tope[i].s[j]!='\0';j++)
      {
            if(tope[i].s[j]==g[c])
            {
                printf("%d\n",tope[i].a);
             }
       }
   }
   return 0;
}
    
        