int main(){

 char a[101];
    char word[20][3];
    int i,n,k,e1,e2; 
    
    
    gets(a);
    
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
         
         
         
       e1=strlen(word[0])   ;
       e2=strlen(word[1]);
             
             
             
         for (i=0;i<e2;i++)
         {
             if (word[1][i]==word[0][0]){                                    
                         printf ("%d\n",i);
                         break;
                                         
                                       }  }    
             return 0;}