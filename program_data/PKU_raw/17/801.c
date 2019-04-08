int main()
{
    char c[100][110];
    int i,j,k,n;
    void pipei(char c[110]);
    int print(char c[110]); 
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    gets(c[i]);
    }
    for(i=0;i<n;i++)
    {
                    printf("%s\n",c[i]);
                    pipei(c[i]);
    }
    return 0;
}

void pipei(char c[110])
{
     int p1=0,p2=0,tihuan=0,i,j,k;
     for(i=0;i<strlen(c);i++)
     {
                             if(c[i]!='(')
                             {
                                          p1+=1;
                                          p2+=1;
                             }
                             else break;
     }
     if(p1==strlen(c)) 
     {
                       print(c);
     }
     else
     {
         while(p1<strlen(c))
         {
                            if(c[p1]=='(')
                            {
                                          p2=p1;
                                          p1+=1;
                            }
                            else if(c[p1]==')')
                            {
                                 c[p1]='A';
                                 c[p2]='A';
                                 tihuan+=1;
                                 break;
                            }
                            else
                            {
                                p1+=1;
                            }
         }
         if(tihuan==0) 
         {
                       print(c);
         }
         else pipei(c);
     }
}

int print(char c[110])
{
     int i;
     for(i=0;i<strlen(c);i++)
     {
                             if(c[i]=='(') printf("$");
                             else if(c[i]==')') printf("?");
                             else printf(" ");
     }
     printf("\n");
     return 0;
}