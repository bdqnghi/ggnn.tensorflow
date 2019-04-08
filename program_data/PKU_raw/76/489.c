int main(){
    struct qj {
        int a,b;
    } qj[50000],e;
    int n,i,k,bmax;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&(qj[i].a),&(qj[i].b));
    }
    for(k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(qj[i].a>qj[i+1].a){
                e=qj[i+1];
                qj[i+1]=qj[i];
                qj[i]=e;
            }
        }
    }
    for(i=0;i<n;i++){
        if(qj[i].b<qj[i+1].a){
            printf("no");
            break;
        }else if(qj[i].b>qj[i+1].b){
            qj[i+1].b=qj[i].b;
        }
    }
    if(i==n){
        printf("%d %d",(qj[0].a),qj[n].b);
    }
    return 0;
}