int main(){
    int n,a,b,c,d,e;
    cin>>n;
    a=n/100;
    n=n-(n/100)*100;
    cout<<a<<endl;
    b=n/50;
    n=n-(n/50)*50;
    cout<<b<<endl; 
    c=n/20;
    n=n-(n/20)*20;
    cout<<c<<endl;
    d=n/10;
    n=n-(n/10)*10;
    cout<<d<<endl;
    e=n/5;
    cout<<e<<endl;
    n=n-(n/5)*5;
    cout<<n<<endl;
    return 0;
}