
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
    if(n==1)  cout<<a[0]<<endl;//???????
    else
        {
            cout<<a[n-1];//???????
            for(int i=n-2;i>=0;i--)
               {
                   cout<<" "<<a[i];//???????????????
               }
        }
        return 0;
}
