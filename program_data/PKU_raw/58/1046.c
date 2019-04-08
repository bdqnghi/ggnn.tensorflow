int judge(char a[81])
{
          int i,l;
          l=strlen(a);
          if((a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z')||a[0]=='_')
          {
             for(i=1;i<l;i++)
             {
                          if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||a[i]=='_'||(a[i]>='0'&&a[i]<='9')) continue;
                          else break;
             }
             if(i==l) return 1;
             else return 0;
          }
          else return 0;
}
int main()
{
    int n,x;
    int i;
    char a[81];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    gets(a);
                    x=judge(a);
                    printf("%d\n",x);
    }
    getchar();
    getchar();
}
            