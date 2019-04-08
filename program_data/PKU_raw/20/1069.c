int main()
{
    int a,b,i,j,k,m,n;
    char s[12],sb[4],x[20];
    while (scanf("%s %s",s,sb)!=EOF)
                  {     m=0;
                        a=strlen(s);
                     for(i=1;i<a;i++)
                           {
                              if(s[i]>s[m])
                              m=i;
                            }
                     for(i=0;i<m+1;i++)
                          {
                             x[i]=s[i];
                          }
                        x [m+1]=sb[0];
                        x [m+2]=sb[1];
                        x [m+3]=sb[2];
                    for(i=m+4;i<a+4;i++)
                         {
                            x[i]=s[i-3];
                          }
                    for(i=0;i<a+3;i++)
                         {
                          printf("%c",x[i]);
                          }
                     printf("\n");
              }
}
