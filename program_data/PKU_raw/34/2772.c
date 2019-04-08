
int calculate(int a){
    if(a==1)
    return 0;
    else if(a%2==1)
    return 3*a+1;
    else
    return a/2;
}

int main(){
    int n,m=0;
    cin>>n;
    while(n!=1)
    {
        m=calculate(n);
        if(n%2==1)
            cout<<n<<"*3+1="<<m<<endl;
        else
            cout<<n<<"/2="<<m<<endl;
        n=m;
    }
    cout<<"End"<<endl;
    return 0;
}