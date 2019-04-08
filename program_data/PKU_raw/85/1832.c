int main(){
    int n,i;char a[50]={0};
    cin>>n;
    while(n--){
        cin>>a;
        if(isdigit(a[0])){
            cout<<"no"<<endl;
            continue;
        }
        for(i=0;a[i]!=0;++i){
            if(a[i]==95||isupper(a[i])||islower(a[i])||isdigit(a[i]))
                continue;
            else break;
        }
        a[i]==0?cout<<"yes"<<endl:cout<<"no"<<endl;
    }
}