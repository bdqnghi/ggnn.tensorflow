int main(void)
{
    char fib[SIZE];
    int i=1;
    int t=1;
    int loser[SIZE];
    char *ptr;
    loser[0]=-1;
    
    gets(fib);
    
    for(i=0;i<strlen(fib);)
                          {
                         if((fib[i]>='0')&&(fib[i]<='9'))  
                         i++;
    
                         else
                          loser[t++]=i++;                                                                                                                                                                                              
                         }
    loser[t]=strlen(fib);                     
    ptr=&fib[0];
    for(i=0;i<t;i++)
     {                    
                         for(;loser[i]<loser[i+1]-1;loser[i]++)
                         {                                                                                                                                                                                              
                         printf("%c",*(ptr+loser[i]+1));
                         }
      if((*(ptr+loser[i])>='0')&&(*(ptr+loser[i])<='9')) 
      printf("\n");                   
                      
      
      }                
    
 
    return 0;
}
