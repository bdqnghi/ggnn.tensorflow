main()
{
      int t,i,j,k,b[10];
      int m[10000];
      char a[10][10000];
      scanf("%d",&t);
      for(i=0;i<=t-1;i++)
      {
           scanf("%s",a[i]);
           b[i]=strlen(a[i]);
      }
      for(i=0;i<=t-1;i++)
      {
           for(j=0;j<=b[i]-1;j++)
           {              
                memset (m,0,10000*sizeof (int));
                 for(k=0;k<=b[i]-1;k++)
                 {
                        if(a[i][j]==a[i][k])
                        m[j]=m[j]+1;
                 }
                 if(m[j]==1)
                 {
                    printf("%c\n",a[i][j]);
                    break;
                 }
           }       
           if(j==b[i]&&m[b[i]-1]!=1)
           printf("no\n");
      }
    
}