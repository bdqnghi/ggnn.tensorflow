int main()
{
int a,k;
cin>>a;
cout<<a/100<<endl;
k=a/100;
a=a-100*k;
cout<<a/50<<endl;
k=a/50;
a=a-50*k;
cout<<a/20<<endl;
k=a/20;
a=a-20*k;
cout<<a/10<<endl;
k=a/10;
a=a-10*k;
cout<<a/5<<endl;
cout<<a%5<<endl;
}