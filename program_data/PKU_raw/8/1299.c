int na,nb;
int a[10000],b[10000],c[10000];
void f1(){
    cin>>na>>nb;
    for( int i=0;i<=na-1;i++) cin>>a[i];
    for( int i=0;i<=nb-1;i++) cin>>b[i];
}
void f2(){
    sort(a,a+na);
    sort(b,b+nb);
}
void f3(){
    for( int i=0;i<=na-1;i++) c[i]=a[i];
    for( int i=na;i<=na+nb-1;i++) c[i]=b[i-na];
}
void f4(){
    cout<<c[0];
    for( int i=1;i<=na+nb-1;i++) cout<<' '<<c[i];
}
int main(){
    f1();f2();f3();f4();
    return 0;
}