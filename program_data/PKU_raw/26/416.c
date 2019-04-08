int main()
{
    char s[102],t;
    gets(s);
    int i,j,k,a,b,c;
    b=strlen(s);
    int n=0;
    for(k=0;k<b;k++)
    {
    for(i=2;i<b;i++)
    {
                     if(s[i-1]==' ')
                     {
                             if(s[i]==' ')
                             {
                                        for(j=i;j<b-1;j++)
                                        {
                                                          s[j]=s[j+1];
                                        }
                                                           n++;
                                                          s[b-n]='\0'; 
                                        
                             }
                     }
    }
    }
    printf("%s",s);
    getchar();
    }
