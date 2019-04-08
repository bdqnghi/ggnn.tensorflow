int a[10000];
int b[10000];
int main()
{
    int l,r,i,j;
    int n;
    cin>>n;
    memset(b,0,n);
    memset(a,0,n);
    while(cin>>l>>r&&(l!=0||r!=0)){b[l]=1;a[r]++;}
    for(i=0;i<n;i++)
    {
                    if(b[i]==1||a[i]<n-1) continue;
                    else break;
    }
    if(i>=n) cout<<"NO FOUND"<<endl;
    else cout<<i<<endl;  
}
