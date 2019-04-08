char word[200];
int pp[200],len;
void op()
{
     int t=0,i;
     for(i=0;i<=len;i++)
     pp[i]=0;
     for(i=0;i<len;i++)
     {
                       if(word[i]=='(')
                       t++;
                       if(word[i]==')')
                       {
                                       t--;
                                       if(t<0)
                                       {pp[i]=ykhao;
                                       t++;}
                       }
     }
     t=0;
     for(i=len-1;i>=0;i--)
     {
                       if(word[i]==')'&&pp[i]!=ykhao)
                       t++;
                       if(word[i]=='(')
                       {
                                       t--;
                                       if(t<0)
                                       {pp[i]=zkhao;
                                       t++;}
                       }
     }
}
void pr()
{
     int i;
     printf("%s\n",word);
     for(i=0;i<len;i++)
     {
                        if(pp[i]==0)
                        printf(" ");
                        if(pp[i]==zkhao)
                        printf("$");
                        if(pp[i]==ykhao)
                        printf("?");
     }
}
/*int main()
{
    printf("1");
    getch();
    return 0;
}*/
int main()
{
    int n,i;
    //freopen("1.txt","w",stdout);
    scanf("%d\n",&n);
    gets(word);
    len=strlen(word);
    op();
    pr();
    for(i=2;i<=n;i++)
    {gets(word);
    len=strlen(word);
    printf("\n");
    op();
    pr();
    }
    //getch();
    return 0;
}
