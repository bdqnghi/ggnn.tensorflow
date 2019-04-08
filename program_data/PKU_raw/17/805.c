int main()
{
    char s[101],a,b,c[101];
    int len,i,j,flag;
    while(gets(s))
    {
                       strcpy(c,s);
                       len=strlen(s);
                       for(i=0;i<len;i++)
                       {
                                         flag=0;
                                         if(s[i]==41)
                                         {
                                                     for(j=i-1;j>=0;j--)
                                                     {
                                                                        if(s[j]==40)
                                                                        {
                                                                                    flag++;
                                                                                    break;
                                                                        }
                                                     }
                                                     if(flag==1)
                                                     {
                                                                s[i]=32;
                                                                s[j]=32;
                                                     }
                                                     else
                                                     s[i]='?';
                                         }
                       }
                       printf("%s\n",c);
                       for(i=0;i<len;i++)
                       {
                                         if(s[i]=='?')
                                         printf("?");
                                         else if(s[i]==40)
                                         printf("$");
                                         else
                                         printf(" ");
                       }
                       printf("\n");
    }
    return 0;
}