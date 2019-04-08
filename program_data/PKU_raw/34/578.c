int jiaogu(int n)
{
    if(n==1)
    {
        cout<<"End";    
    }
    else if(n==2)
    {   
        cout<<"2/2=1"<<endl;
        return jiaogu(1);
    }
    else if(n%2==1)
    {
        cout<<n<<"*3+1="<<3*n + 1<<endl;
        return jiaogu(n*3+1);      
    }
    else
    {
        cout<<n<<"/2="<<n/2<<endl;
        return jiaogu(n/2);
    }
} 
int main()
{
    int n;
    cin>>n;
    jiaogu(n);
    int x;cin>>x;
    return 0;
    
    
}
