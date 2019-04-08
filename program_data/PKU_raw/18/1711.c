void zero(int a[100][100],int n){
    int min[100];
    for(int i=0;i<n;++i){
        min[i]=a[i][0];
        for(int j=0;j<n;++j)
            if(a[i][j]<min[i])
                min[i]=a[i][j];
        if(min[i]!=0)
            for(int j=0;j<n;++j)
                a[i][j]-=min[i];
    }
    for(int j=0;j<n;++j){
        min[j]=a[0][j];
        for(int i=0;i<n;++i)
            if(a[i][j]<min[j])
                min[j]=a[i][j];
        if(min[j]!=0)
            for(int i=0;i<n;++i)
                a[i][j]-=min[j];
    }
}
void subduction(int a[100][100],int n){
    for(int i=1;i<n-1;++i){
        a[0][i]=a[0][i+1];
        a[i][0]=a[i+1][0];
    }
    for(int i=1;i<n-1;++i)
        for(int j=1;j<n-1;++j)
            a[i][j]=a[i+1][j+1];
}
int main(){
    int m,n,s,a[100][100];
    cin>>n;
    for(int t=0;t<n;++t){
        s=0,m=n;
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                cin>>a[i][j];
        while(m!=1){
            zero(a,m);
            s+=a[1][1];
            subduction(a,m--);
        }
        cout<<s<<endl;
    }
}
