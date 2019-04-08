int i,n,j,k,M;
int a[10000],b[10000];
int main(){
    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        sort(b,b+n);
        M=-100000;
        for(i=0;i<=n;i++){
            int now=-i;
            if(now+n-i<=M)break;
            for(j=n-1-i,k=n-1;j>=0;j--,k--)
                if(a[k]>b[j])now++;else
                    if(a[k]<b[j])now--;
            if(now>M)M=now;
        }
        cout<<M*200<<endl;
    }
    return(0);
}