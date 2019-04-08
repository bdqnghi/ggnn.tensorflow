
int main()
{
    int *p=NULL;
    int n; 
    int init[100];
    cin>>n;
    cin>>init[0];
    p=&init[0];
    
    for(int i=1; i<n ;i++)
    cin>>*(p+i);
    
    for(int i=1;i<n;i++)
    cout<<*(p+n-i)<<' ';
    cout<<*p;
    
    
    return 0;
}
