
int main()
{
    char s[100];
    char c[100];
    int i,k,w,j;
    
    gets(s);
    
    k=strlen(s);
    
    w=j=0;
    
    for(i=0;i<k;i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]==' ') 
            {
                w=1;
            }
            
            else
            {
              c[j]=s[i];
              j=j+1;
            }
            
        }
        else 
        {
            c[j]=s[i];
            j=j+1;
        }
        
     
    }
    
    c[j]=0;
    
    puts(c);
    
    return 0;
    
}


