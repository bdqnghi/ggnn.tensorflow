

int main()
{   int n;
    cin>>n;
    char b;
    cin.get(b);
    char a[100]={0};
    int c[100]={0};
    int d; 
    int i;
    for(i=1;i<n;i++)                     //?? 
       {  cin>>d;
          c[i]=d;
          cin.get(b);
          a[i]=b;
       }
    cin>>d;
    c[n]=d;
    for(i=n;i>1;i--)               //???? 
      {  cout<<c[i];
        cout<<a[i-1];
      }
    cout<<c[1];

    return 0;
}