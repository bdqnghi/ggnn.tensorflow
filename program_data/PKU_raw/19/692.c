int main()
{


   char a[1000];
    char word[100][100];
    char sub[100];
    char w[100];
    int i,n,k; 
    
    
    gets(a);
    gets(w);
    gets(sub);
    
    n=0;k=0;
    for (i=0;a[i]!=0;i++){
        
        if (a[i]==' '){
            a[i]='\0';     
           strcpy(word[n],(a+k));         
           
            k=i+1;
            n++;        
             }
        }
         strcpy(word[n],(a+k));n++;
         
         
         
    
             
                          
         for (i=0;i<n;i++)
         {
             if (strcmp(word[i], w) == 0 ){     
                                                    
                        strcpy(word[i],sub);
                   
                                         
                                         }    
             }
             
             
             for (i=0;i<n-1;i++){
                 
                 printf ("%s ",word[i]);
                 
                 }puts(word[n-1]);
return 0;
}