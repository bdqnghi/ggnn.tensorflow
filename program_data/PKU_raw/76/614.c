int main(){
    int n,i,k,e,z,q,w,c;
    scanf("%d",&n);
    struct qj{
        int a;
        int b;
    }qj[50000];
    for(i=0;i<n;i=i+1){
        scanf("%d%d",&qj[i].a,&qj[i].b);
    }
    for(k=1;k<=n;k=k+1){
        for(i=0;i<n-k;i=i+1){
            if(qj[i].a>qj[i+1].a){
                qj[n]=qj[i+1];
                qj[i+1]=qj[i];
                qj[i]=qj[n];
            }
        }
    }
    z=0;
    for(i=1;i<n;i=i+1){
        z=0;
        for(c=0;c<i;c=c+1){
            if(qj[i].a<=qj[c].b){
                z=1;
            }
        }
        if(z==0)break;
    }
    q=qj[0].a;
    w=qj[0].b;
    for(i=0;i<n;i=i+1){
        if(qj[i].a<q){
            q=qj[i].a;
        }
        if(qj[i].b>w){
            w=qj[i].b;
        }
    }
    if(z==0){
        printf("no");
    }else{
        printf("%d %d",q,w);
    }
    return 0;
}
