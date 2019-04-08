int main()
{
    char a[1000];
    cin.getline(a,1000);
    char *p;
    p = a;
    int b;
    b = strlen(a);
    for(;p<a+b;)
    {
       if((*p>='0')&&(*p<='9'))
       {
          cout << *p;
          p++;
          if((*p<'0')||(*p>'9'))
          cout << endl;
       }
       else
       p++;
    }
    return 0;
}
