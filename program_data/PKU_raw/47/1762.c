int main()
{   int n;
    cin>>n;
    int num[n];
    int i;
    int a;
    for(i=0;i<n;i++)
        {   cin>>a;
        num[i]=a;
         }
    for(i=(n-1);i>=0;i--)
          {if(i>0)  cout<<num[i]<<' ';
          else cout<<num[i];
          }
    return 0;
}