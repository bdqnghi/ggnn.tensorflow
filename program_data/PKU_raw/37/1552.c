main()
{
      int i,j,t,x,k,m,h,a[26],b[100000];
      char str[100000];
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
                  for(j=0;j<26;j++)
                  a[j]=0;    
                  h=0;
                  scanf("%s",str);
                  m=strlen(str);
                  for(k=0;k<m;k++)
                  {
                                  b[k]=str[k]-'a';
                                  a[b[k]]=a[b[k]]+1;
                  }
                  for(j=0;j<m;j++)
                  {
                                   if(a[b[j]]==1&&h==0)
                                   {
                                              printf("%c\n",b[j]+'a');
                                              h=1;
                                   }
                  }
                  if(h==0)
                  printf("no");
      }
      
}  
