int main()
{
    int a[100]={1,1,1,1};
    int i=0;
    int *p=a+3;
    for(i=0;i<100;i++)
    {
       *(p+i)=*(p+i-1)+*(p+i-2);
       //cout<<*(p+i)<<endl;
    }
    int n;
    cin>>n;
    i=0;
    while(i<n)
    {
        int m;
        cin>>m;
        cout<<a[m]<<endl;
        i++;

    }
  }