int main(){
    int a[50000],b[50000],s[50000]={0},u[50000]={0},v[50000]={0};
    int n,i,j,x,y,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        u[a[i]]=1;
        v[b[i]]=1;
        for(j=a[i]+1;j<b[i];j++)
            s[j]=1;
    }
    for(i=0;i<50000;i++){
        if(u[i]==1&&v[i]==1)
            s[i]=1;
    }
    for(i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            j=a[i];
            a[i]=a[i+1];
            a[i+1]=j;
        }
    }
    s[a[n-1]]=1;
    for(i=0;i<n-1;i++){
        if(b[i]>b[i+1]){
            j=b[i];
            b[i]=b[i+1];
            b[i+1]=j;
        }
    }
    s[b[n-1]]=1;
    for(i=0;i<10001;i++){
        if(s[i]==1&&m==0){
            x=i;
            m=1;
        }
        if(m==1){
            if(s[i]==0){
                y=i-1;
                m=2;
            }
        }
        if(m==2){
            if(s[i]==1){
                m=3;
            }
        }
    }
    if(m==2){
        printf("%d %d",x,y);
    }
    else
        printf("no");
    return 0;
}