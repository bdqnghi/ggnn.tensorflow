int main()
{
    int n,i,a=0,b,c,d;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        b = i % 7;
        c = i / 10;
        d = i % 10;
        if(b!=0&&c!=7&&d!=7)
            a = a + i * i;
    }
    cout << a <<endl;
  return 0;
}
