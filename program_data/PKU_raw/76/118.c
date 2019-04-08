int main(){
    
    int n,i,j,e,a[50000],b[50000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d %d",&a[i],&b[i]);
    }
    for(j=1;j<=n;j++){
            for(i=0;i<n-j;i++){
                      if(a[i]>a[i+1]){
                               e=a[i+1];
                               a[i+1]=a[i];
                               a[i]=e;
                               e=b[i+1];
                               b[i+1]=b[i];
                               b[i]=e;
                      }
                      else if(a[i]==a[i+1]){
                               if(b[i]>b[i+1]){
                                   e=b[i+1];
                                   b[i+1]=b[i];
                                   b[i]=e;
                               }
                      }
            }
    }
    
    
    int tmp = b[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > tmp) 
            {printf("no\n");return 0;}
        if(tmp < b[i])
            tmp = b[i]; 
    }
    
    
    /*j=0;
    for(i=0;i<n-1;i++){
            if(b[i]<a[i+1])
            {
                printf("no");
                break;
            }
            else j++;
    }
    
    if(j==n-1) */printf("%d %d",a[0],tmp);
    //scanf("%d",&n);
    return 0;
}