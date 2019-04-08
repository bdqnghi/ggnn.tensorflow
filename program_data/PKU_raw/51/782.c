main() 
{
       int n;
       scanf("%d\n",&n);
       char a[500];
       gets(a);
       int len,i,j,max=0,k,m;
       len=strlen(a);
       char b[500][n];
       for(i=0;i<len-n+1;i++)
       for(j=0;j<n;j++)
       b[i][j]=a[i+j];
       int num[500];
       for(i=0;i<len-n;i++)
       {
                           num[i]=1;
                           char c[n+1];
                           for(m=0;m<n;m++)
                           {
                           c[m]=b[i][m];
                           }
                           //c[m]=0;
                           for(j=i+1;j<len-n+1;j++)
                           {
                                                   char d[n+1];
                                                   for(k=0;k<n;k++)
                                                   {
                                                   d[k]=b[j][k];
                                                   }
                                                   //d[k]=0;
                                                   if(strcmp(c,d)==0)
                                                   num[i]++;
                           }
       }
       max=num[0];
       for(i=0;i<len-n;i++)
       if(num[i]>max)
       max=num[i];
       if(max==1)
       {
       printf("NO");
       return 0;
       }
       int count=0;
       for(i=0;i<len-n+1;i++)
       if(num[i]==max)
       {
                      count++;
       }
       printf("%d\n",max);
       for(i=0;i<len-n+1;i++)
       if(num[i]==max)
       {
                      for(j=0;j<n;j++)
                      printf("%c",b[i][j]);
                      printf("\n");
       }
}
