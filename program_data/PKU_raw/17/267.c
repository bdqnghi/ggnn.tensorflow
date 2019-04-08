int main()
{
    char s[300],ss[300];
    int a[300];
    int l,i,t;
    do
    {
if (scanf("%s",s)==EOF) break;
          //gets(s);
          if (s[0]=='\0') break;
          l=strlen(s);
if (l==0) break;
          t=0;
          for (i=0;i<l;i++)
          {
             ss[i]=' ';
             if (s[i]=='(')
             {
                t++;
                a[t]=i;           
             }
             if (s[i]==')')
             {
                if (t==0)
                {
                   ss[i]='?';
                   continue;      
                }
                t--;
             }                            
          }
          for (i=1;i<=t;i++) ss[a[i]]='$';
          ss[l]='\0';
puts(s);
          puts(ss);
    }
    while(0==0);
}
