int main()
{
    char s[100],a[100],b[100],c[100][100];
    int i,j,m=0,n=0;
    gets(s);
    gets(a);
    gets(b);
    for(i=0;i<strlen(s);i++)
    {
      if(s[i]==' ')
      {
        n++;
        c[n][0]=s[i+1];
        m=1;
        i++;          
      }
      else
      {
        c[n][m]=s[i];
        m++;    
      }                        
    }
    for(i=0;i<=n;i++)
    {
      if(strcmp(c[i],a)==0)
       strcpy(c[i],b);                 
    }
    for(i=0;i<n;i++)
    printf("%s ",c[i]);
    printf("%s",c[n]);
    
    return 0;
    
    
}