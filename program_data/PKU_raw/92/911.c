int main()
{
    int n;
    int a[1005];
    int b[1005];
    int count,i,j,x,y,start,temp;
    while(cin>>n){
        if(n==0)break;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        count=0; 
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        x=n-1,y=n-1,i=0,j=0;
        while(n--){
            if(a[x]>b[y]){
                x--;
                y--;
                count++;
            }
            else if(a[i]>b[j]){
                i++;
                j++;
                count++;
            }
            else if(a[i]<b[y]){
                i++;
                y--;
                count--;
            }
        }       
        cout<<count*200<<endl;
    }
     return 0; 
}
