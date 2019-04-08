int main()
{
    int n;//?????n 
    cin>>n;//??n 
    int a1,b1,c1,d1,e1;//?????? 
    int a2,b2,c2,d2,e2,f2;//?????? 
    a1=n%100;
    a2=(n-a1)/100;//????100??????? 
    cout<<a2<<endl;
    b1=a1%50;
    b2=(a1-b1)/50;
    cout<<b2<<endl;
    c1=b1%20;
    c2=(b1-c1)/20;
    cout<<c2<<endl;
    d1=c1%10;
    d2=(c1-d1)/10;
    cout<<d2<<endl;
    e1=d1%5;
    e2=(d1-e1)/5;
    cout<<e2<<endl;
    f2=e1;
    cout<<f2<<endl;
    return 0;
}
