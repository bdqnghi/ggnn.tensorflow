int main()
{
    int n,j;    
    int i=1;
    scanf("%d",&n);
     
     int k;
    while (i<=n+1)
    { 
       
          char a[1000];
          gets(a);
          int l;
          l=strlen(a);
          if (l>1)
          {
                         if (a[0]<='z'&&a[0]>='A')
                             {
                                           k=l-1;       j=1;
                               while (j<l)
                               {
                                  if (a[j]>='A'&&a[j]<='z')
                                       
                                             k--;
                                       
                                   else if (a[j]>='0'&&a[j]<='9')
                                      
                                              k--;
                                       
                                   else if (a[j]=='_')
                                               k--;
                                  
                                   j++;
                                }
                               if (k==0)
                                          printf("1\n");
                               else
                                         printf("0\n");
                        }
                        else if (a[0]=='_')
                            { 
                                j=1;k=l-1;
                                   while (j<l)
                                     {
                                        if (a[j]>='A'&&a[j]<='z')
                                   
                                                  k--;
                                              
                                        else if (a[j]>=('0')&&a[j]<=('9'))
                                             
                                                 k--;
                                              
                                         else if (a[j]=='_')
                                                 k--;
                                          
                                           j++;
                                       }
                                     if (k==0)
                                          printf("1\n");
                                     else
                                          printf("0\n");
                              }
                         else 
                         printf("0\n");
          }
          else if (l==1)
          {
                  if (a[0]>='A'&&a[0]<='z')
                  printf("1\n");
                  else if (a[0]=='_')
                  printf("1\n");
                  else printf("0\n");

          }
          i++;
    }
    getchar();getchar();getchar();getchar();getchar();getchar();getchar();
    getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}