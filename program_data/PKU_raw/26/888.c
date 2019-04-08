
int main()
{ 
    char str[200];
     int i,n;
    gets(str);
   
    n=strlen(str);
     for(i=0;i<n;i++)
      {
                    if((str[i])!=' ')
                    {
                                printf("%c",str[i]);
                                }
                    else if((str[i])==' ')
                    {
                         if((str[i+1])==' ')
                         continue;
                         else if((str[i+1])!=' ')
                         {
                              printf("%c",str[i]);
                              }
                         }
                    
                    }
    
 
   return 0;
   }

