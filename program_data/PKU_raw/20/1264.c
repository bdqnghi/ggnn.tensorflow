void main()
{ char str[100][10],substr[100][3];
  int m,k,n=0,i,j;char max;
  
  while(scanf("%s %s",str[n],substr[n])!=EOF)
     {
         n++;
     }
  for(i=0;i<n;i++)
      {
          m=strlen(str[i]);
         j=0; max=str[i][j];
         for(j=1;j<m;j++)
           {
               if(str[i][j]>max)  {max=str[i][j];k=j;}
           }

        for(j=0;j<=k;j++)
            {printf("%c",str[i][j]);}
        for(j=0;j<3;j++)
           {
               printf("%c",substr[i][j]);
           }
        for(j=k+1;j<m;j++)
          {
              printf("%c",str[i][j]);
          }
          printf("\n");
      }
}