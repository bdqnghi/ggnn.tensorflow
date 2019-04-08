int main()
{
    int a,b,i;
    cin>>a;
    for(i=1;a!=1;i++)//?a==1??? 
    {
                    if(a%2==1) {b=a*3+1;cout<<a<<"*3+1="<<b<<endl;a=b;}//???????? 
                    else {b=a/2;cout<<a<<"/2="<<b<<endl;a=b;}}//???????? 
                    cout<<"End"<<endl;
                    return 0;
}
