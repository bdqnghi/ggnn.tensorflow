int main(){
    int c,d,e,f,g,h,i,n,k,l;
    int a[10000];
    int b[10000];
    h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(c=1;c<n;c++){
        for(d=0;d<n-c;d++){
            if(a[d]>a[d+1]){
                e=a[d+1];
                a[d+1]=a[d];
                a[d]=e;
                l=b[d+1];
                b[d+1]=b[d];
                b[d]=l;
            }
        }
    }
    for(c=0;c<n-1;c++){
        f=0;
        for(g=0;g<c+1;g++){
        if(a[c+1]>b[g]){
            f++;
        }
        }
        if(f==c+1){
            h++;  
    }
    }
    for(c=1;c<n;c++){
        for(d=0;d<n-c;d++){
            if(b[d]>b[d+1]){
                e=b[d+1];
                b[d+1]=b[d];
                b[d]=e;
            }
        }
    }
    if(h==0){
        printf("%d %d",a[0],b[n-1]);
    }
    else{
        printf("no");}
        return 0;
    }


