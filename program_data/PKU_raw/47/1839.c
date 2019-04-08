int main()
{
    int n,i,a[100]={0};
    int *point;
    cin>>n;
    for(i=0;i<n;i++)
     cin>>a[i];
    point=&a[n-1];        //point???????? 
    for(i=0;i<n-1;i++)
     cout<<*point--<<' ';//????
    cout<<*point;
    return 0;
}