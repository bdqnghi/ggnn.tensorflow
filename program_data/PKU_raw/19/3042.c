int main()
{
    char string[300];
    
    gets(string);
    char a[200],b[200];
    scanf("%s %s", a, b);
   
   char word[200][200];
    int n1,n2,i,k;
    int m=0;
    int p=0;
    n1=strlen(string);
    for(i=0;i<n1;i++)
    {
                     if(string[i]==' ')
                     {
                                     m++;
                                     p=0;
                     }
                     else
                     {
                     word[m][p]=string[i];
                     p++;
                     }
                     
    }
   
    if(strcmp(word[0],a)==0)
    printf("%s", b);
    else
    printf("%s", word[0]);
    
    for(k=1;k<=m;k++)
    {
                   if(strcmp(word[k],a)==0)
                   printf(" %s", b);
                   else
                   printf(" %s", word[k]);
    }
  
    return 0;
}
    
    
    
    
    
    

      
