int main()
{
char c[100];
cin>>c;
cout<<c;
char a[100];
while(cin>>a)
{
cout<<' '<<a;
memset(a,0,sizeof(a));
}
}