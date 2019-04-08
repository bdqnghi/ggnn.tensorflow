
void swap(int * a,int * b,int n){
    int *c=a;
    a=b;
    b=c;
    
}

void backward(int * pointer,int n){
    for (int i=n-1; i>0; i--) {
        swap(*(pointer+i), *(pointer+i-1));
    }
}

int main(){
    int n,time;
    cin>>n>>time;
    int line[120];
    for (int i=0; i<n; i++) {
        cin>>line[i];
    }
    int *p_1=line;
    for (int i=1; i<=time; i++) {
        backward(p_1, n);
    }
    cout<<*p_1;
    for (int i=1; i<n; i++) {
        cout<<' '<<*(p_1+i);
    }
}
