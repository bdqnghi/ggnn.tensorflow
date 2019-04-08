int main()
{
    char str[122];
    gets(str);
    char *p=NULL;
    for(p=str;*p;p++)
    {
      if(*p==' ')
      {
         while(*p==' ')
          {
            p++;
          }
          p--;
          cout<<*p;
      }
      else cout<<*p;
    }
      int ss;cin>>ss; 
      return 0;
}
