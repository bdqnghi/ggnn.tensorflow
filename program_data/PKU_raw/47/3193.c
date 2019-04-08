int main()
{
    int s[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>s[i];
    int *p=&s[n];
    while(n>1)
    {
               p--;
               n--;
               cout<<*p<<' ';
    }p--;
    cout<<*p<<endl;
    return 0;
}
