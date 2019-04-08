int main()
{
    void f(int a);
    int n,num;
    cin>>n;
    cin>>num;
    f(n-1);
    cout<<num;
    return 0;
}
void f(int a)
{
     int num;
     cin>>num;
     if(a>0)
     {
     f(a-1);
     cout<<num<<" ";
     }
}
