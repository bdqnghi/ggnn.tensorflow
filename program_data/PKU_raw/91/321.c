int main()
{
    char str[150]; 
    char *p,*q;
    gets(str);
    p=str;
    q=str;
    while(*(p+1)!='\0')
    {
                   cout<<(char)((int)*p +(int)(*(p+1)));
                   p++;
    }
    if(*(p+1)=='\0')
    {
                    cout<<(char)((int)*p + (int)*q);
    }
    return 0;
}
      
