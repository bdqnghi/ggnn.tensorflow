int main()
{
    char a[6];
    int c;
    int i=0;
    do
    {
         c=getchar();
         a[i]=c;
          i++;
    }
    while (c!='\n');
    i-=2;
    for (;i>=0;i--)
    {
        cout<<a[i];
    }
}
