

void swap(int * a,int *b){
    int * ch;
    ch=a;
    a=b;
    b=ch;
}

int main(){
    int n,line[150];
    
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>line[i];
    }
    int * p_1=line;
    for (int i=0; i<=((int)n/2)-1; i++) {
        swap(*(p_1+i), *(p_1+n-i-1));
    }
    cout<<* (p_1);
    for (int j=1; j<n; j++) {
        cout<<' '<<* (p_1+j);
    }
    return 0;
}