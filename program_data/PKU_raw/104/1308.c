
int min(int x,int y){
    if (x>y) {
        return y;
    }
    else return x;
}
int max(int x,int y){
    if (x<y) {
        return y;
    }
    else return x;
}
int main(){
    int x,y,a,b,logofa;
    cin>>x>>y;
    a=min(x,y);
    b=max(x,y);
    logofa=(log(a)/log(2.0));
    while (b>=(pow(2.0, logofa+1))) {
        b=b/2;
    }
    while (a>0) {
        if (a==b) {
            cout<<a;
            break;
        }
        a=a/2;
        b=b/2;
        
    }
        
}