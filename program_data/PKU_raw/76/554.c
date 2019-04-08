int main(){
    int n,i,u,k,e,p;
    int a[60000],b[60000];
    scanf("%d",&n);
    p=0;
    for(i=0,u=0;i<n;i++,u++){
        scanf("%d %d",&(a[i]),&(b[u]));
    }
    for(k=1;k<n;k++){
        for(i=0;i<n-k;i++){
            if(a[i]>a[i+1]){
                e=a[i];
                a[i]=a[i+1];
                a[i+1]=e;
            }
        }
    }
    for(k=1;k<n;k++){
        for(u=0;u<n-k;u++){
            if(b[u]>b[u+1]){
                e=b[u];
                b[u]=b[u+1];
                b[u+1]=e;
            }
        }
    }
    for(i=1,u=0;i<n;i++,u++){
        if(b[u]<a[i]){
            printf("no");
            break;
        }else{
            p=p+1;
        }
         if(p==n-1){
         printf("%d %d",a[0],b[n-1]);
         
         }    
    }
    return 0;
}

