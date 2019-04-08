int main()
{
    char string[200];
    gets(string);
    int n,i,j;
    n=strlen(string);
    for(i=0;i<n;i++)
    {
                    while(string[i]==' '&&string[i+1]==' ')
                    {
                                    for(j=i+1;j<n;j++)
                                    {
                                          string[j]=string[j+1];
                                    }
                    }
                    
}
    
    
    for(i=0;i<n;i++)
    {
                  
                    if(string[i]=='\0')
                    break; 
                     printf("%c", string[i]);
    }
    return 0;
}
