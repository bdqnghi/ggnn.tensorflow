
int ishuiwen(char c[510])
{
    int i,f=1;
    for(i=0;i<strlen(c);i++)
    {
                            if(c[i]!=c[strlen(c)-i-1])
                            {
                                                      f=0;
                                                      break;
                            }
    }
    return (f);
}

int main()
{
    char c[510],jilu[510];
    int  i,j,k;
    gets(c);
    for(i=2;i<=strlen(c);i++)
    {
                             for(j=0;j<=(strlen(c)-i);j++)
                             {
                                                          for(k=j;k<(j+i);k++)
                                                          {
                                                                              jilu[k-j]=c[k];
                                                          }
                                                          jilu[i]='\0';
                                                          if(ishuiwen(jilu))
                                                          printf("%s\n",jilu);
                             }
    }
    return 0;
}