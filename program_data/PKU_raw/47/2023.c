

int main()
{
    int n;        //??n
    cin>>n;       //??n
    int a[100],i,j;   //????
    int *p=&a[0];
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);     //????
    }
    for(j=0;j<n-1;j++)
    cout<<*(p+n-j-1)<<" ";      //?????
    cout<<*p;
    return 0;
}
