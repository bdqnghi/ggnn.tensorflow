
int main()
{
    int N,n=0,c;
    cin>>N;
    int b[N];
    for (int i=0; i<N; i++) {
        cin>>c;
        if (c%2==1) {
            b[n]=c;
            n++;
        }
    }
    int a[n];
    for (int i=0; i<n; i++) {
        a[i]=b[i];
    }
    int m;
    for (int i=n; i>=0; i--) {
        for (int j=0; j<i-1; j++) {
            if (a[j]>a[j+1]) {
                m=a[j+1];
                a[j+1]=a[j];
                a[j]=m;
            }
        }
    }
    for (int i=0; i<n; i++) {
        if(i==n-1){
            cout<<a[i]<<endl;
        }else{
            cout<<a[i]<<',';
        }
    }
    return 0;
}