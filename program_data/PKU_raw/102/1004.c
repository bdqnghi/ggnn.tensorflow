int main(){
    int n,l,i,j=1,k=1;
    int o;
    double e;
    scanf("%d",&n);
    char a[45];
    double p[45],q[45],r[45];

        char sex[45];
        double h[45];

    for(i=0;i<n;i++){
        scanf("%s %lf",sex,&h[i]);
        if(sex[0]=='m'){
            p[j]=h[i];
            j++;
            }
        else{
            q[k]=h[i];
            k++;
            }
    }

    for(i=0;i<n;i++){

    }
    for(l=1;l<=j-1;l++){
        for(i=1;i<j-l;i++){
            if(p[i]>p[i+1]){
                e=p[i+1];
                p[i+1]=p[i];
                p[i]=e;
                }
        }
    }
    for(l=1;l<=k-1;l++){
        for(i=1;i<k-l;i++){
            if(q[i]<q[i+1]){
                e=q[i+1];
                q[i+1]=q[i];
                q[i]=e;
                }
        }
    }
    for(i=1;i<=j-1;i++){
        r[i]=p[i];
        }
    o=1;
    for(i=j;i<=n;i++){
        r[i]=q[o];
        o++;
        }
    for(i=1;i<n;i++){
        printf("%.2lf ",r[i]);
    }
    if(i==n){
        printf("%.2lf",r[i]);
        }
    return 0;
}
