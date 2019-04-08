main()
{
      int i,j,count[20000]={0},s=0,n,m=0;
      char a[20000][50]={'\0'};
      scanf("%d\n",&n);
      for(i=0;i<n-1;i++)
      {
                       for(j=0;j<50;j++)
                       {
                                        scanf("%c",&a[i][j]);
                                        if(a[i][j]==' ')break;
                                        count[i]++;
                       }                
      }
      scanf("%s",a[n-1]);
      for(i=0;i<50;i++)
      {
                       if(a[n-1][i]!='\0')count[n-1]++;
                       else break;
      }
      for(i=0;i<n-1;i++)
      {
                      if(m+count[i]<80 && m+count[i]+1+count[i+1]<=80)
                      {
                                       for(j=0;j<count[i];j++)
                                       {
                                                              printf("%c",a[i][j]);
                                       }
                                       printf(" ");
                                       m=m+count[i]+1;
                      }
                      else if(m+count[i]<80 && m+count[i]+1+count[i+1]>80)
                      {
                           for(j=0;j<count[i];j++)printf("%c",a[i][j]);
                           m=m+count[i]+1;
                      }
                      else if(m+count[i]==80)
                      {
                           for(j=0;j<count[i];j++)printf("%c",a[i][j]);
                           printf("\n");
                           m=0;
                      }
                      else if(m+count[i]>80)
                      {
                           printf("\n");
                           for(j=0;j<count[i];j++)printf("%c",a[i][j]);
printf(" ");
                           m=count[i]+1;
                      }
      }
for(i=0;i<count[n-1];i++)printf("%c",a[n-1][i]);
}