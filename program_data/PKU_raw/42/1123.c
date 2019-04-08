//i????? ??l????????? 
int main()
{
    int n=0,k=0;
    int a[100000];
    int i=0,j=0,l=0;
    cin>>n;
    for(i=0;i<n;i++){
                     cin>>a[i];
                     }
    cin>>k;
    i=0;
    while(a[i]!=k&&i<n)i++;
    while(i<n){
               while(a[i]==k){i++;j++;}
               a[i-j]=a[i];
               i++;
               }
    l=n-j;                
    for(i=0;i<l-1;i++)
       cout<<a[i]<<' ';
    cout<<a[l-1];                 
    return 0;                
     
}
