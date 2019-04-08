int main ()
{
    int i,j,k,js,l;
    char c[600],d[600];
    double a,b;
    scanf("%lf%s%s",&a,c,d);
    if (strlen(c)!=strlen(d))
    {
                  printf ("error");
                  return 0;           
    }
    l=strlen(c);
    js=0;
    for (i=0;c[i]!='\0';i++)
    {
        if ((c[i]=='A'||c[i]=='G'||c[i]=='C'||c[i]=='T')&&(d[i]=='A'||d[i]=='G'||d[i]=='C'||d[i]=='T'))
        {
                   if (c[i]==d[i])
                   js++;                                                                        
        }
        else 
        {
             printf ("error");
                  return 0;
        }        
    } 
    b=1.0*js/l;
    if (b>=a)
    printf ("yes");
    else 
    printf ("no");
    
    
    
    

    return 0;
}

