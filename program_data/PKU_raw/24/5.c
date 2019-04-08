
char s[1000],ss[1000],sl[1000];
int max,min;

int main()
{
    int t;
    cin>>s;
    max=min=strlen(s);
    strcpy(ss,s);
    strcpy(sl,s);
    while (cin>>s)
    {
          t=strlen(s);
          if (t>max)
          {
                    max=t;
                    strcpy(sl,s);
          }
          if (t<min)
          {
                    min=t;
                    strcpy(ss,s);
          }
    }
    cout<<sl<<endl<<ss<<endl;
    cin>>s;
    return 0;
}
