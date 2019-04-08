
int main()
{
    int n,i,c;
    int a[101]={0};
    cin >>n;
    cin>>c;
    a[c]=1;
    cout<<c;
    while(cin>>c)
    {
        if(a[c]==0)
        {
          cout <<" "<<c;
          a[c]=1;
        }
   }
//for (;;) ;          
    return 0;
}
                       
                       
