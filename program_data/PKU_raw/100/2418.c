int main()
{
    char string[1000];
    gets(string);
    int n,i;
    n=strlen(string);
    int x[200]={0},m;
    int flag=0;
    for(m=65;m<=90;m++)
    {
                    for(i=0;i<n;i++)
                    {
                                       if(string[i]==m)
                                       {
                                                       x[m]=x[m]+1;
                                       }
                    }
                    if(x[m]!=0)
                    {
                               printf("%c=%d\n", m, x[m]);
                               flag++;
                    }
    }
    for(m=97;m<=122;m++)
    {
                        for(i=0;i<n;i++)
                    {
                                       if(string[i]==m)
                                       {
                                                       x[m]=x[m]+1;
                                       }
                    }
                    if(x[m]!=0)
                    {
                               printf("%c=%d\n", m, x[m]);
                               flag++;
                    }
    }
    if(flag==0)
    printf("No");
    return 0;
}
