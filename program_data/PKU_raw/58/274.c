int main()
{
    int n,i,f,q,d=0;
    scanf("%d",&n);
    char a[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_'},c[1000][1000];
    gets(c[1]);
    for(i=1;i<=n;i++)
    {
                      gets(c[i]);
                      d=0;
                      for(q=0;;q++)
                      {
                                   if(c[i][q]==' '||c[i][q]=='.'||c[i][q]=='@'||c[i][q]==';'||c[i][q]=='-'||c[i][q]=='='||c[i][q]=='+')
                                   {
                                   d=5;
                                   }
                                   if(c[i][q]=='\0')
                                   break;
                      }
                      if(d==5)
                      {
                              printf("0\n");
                              continue;
                      }
                      for(f=0;f<=26;f++)
                      {
                                        if(c[i][0]==a[f]||c[i][0]==(a[f]-32))
                                        {
                                        printf("1\n");
                                        d++;
                                        }
                      }
                      if(d==0)
                      {                          
                      printf("0\n");
                      }
    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}
