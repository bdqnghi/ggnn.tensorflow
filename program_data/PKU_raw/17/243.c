

char s[100];
int temp[100];
int addition[100];
int flag,i,j;
int f()
{
    for(i=0;i<strlen(s);i++)
      {
          if(s[i]=='(')  {s[i]='$';addition[flag]=i;flag++;}
          else if(s[i]==')')
            {
                if(flag)
                    {
                        s[i]=' ';
                        flag--;
                        s[addition[flag]]=' ';
                    }
                    else s[i]='?';
            }
           else s[i]=' ';
      }
}
int main()
{
    while(cin>>s)
      {
          cout<<s<<endl;
          flag=0;
          f();
          cout<<s<<endl;
      }
      return 0;
}
