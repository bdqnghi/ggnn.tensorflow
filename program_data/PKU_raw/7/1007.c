char str[256],sub[256],repl[256];
int i=0,j=0,k,m=0;
main()
{
      scanf("%s\n%s\n%s",str,sub,repl);
      for(i=0;str[i]!='\0';i++)
      {
                                  if(sub[0]==str[i])
                                  {
                                                             k=i+1;
                                                             j=1;
                                                             for(j=1;sub[j]!='\0';j++)
                                                             {
                                                                                         if(sub[j]==str[k])
                                                                                         {
                                                                                                                    k++;
                                                                                         }
                                                                                         else
                                                                                         {
                                                                                             break;
                                                                                         }
                                                             }
                                                             if(sub[j]=='\0')
                                                             {
                                                                             break;
                                                                             
                                                             }
                                  }
      }
      for(m=0;repl[m]!='\0';m++)
      {
                                if(str[i]=='\0')
                                {
                                                break;
                                }
                                str[i]=repl[m];
                                i++;
      }
      printf("%s\n",str);
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
                                                                            
                                                                                                                        
                                                                                                                     
                                                                                         
                                  
      
