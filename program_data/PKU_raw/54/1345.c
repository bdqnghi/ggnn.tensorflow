

double apple(double n,double k,double start){
    double result=start;
    for (int i=1; i<=n; i++) {
        result=(result*n)/(n-1)+k;
    }
    return result;
    
    
}

int main(){
    double n,k;
    cin>>n>>k;
    for (int i=1; ; i++) {
        if (apple(n, k, i)-((int) (apple(n, k, i)))==0) {
            cout<<((int )(apple(n, k, i)));
            break;
        }
    }
    
    
    
    
    return 0;
}
