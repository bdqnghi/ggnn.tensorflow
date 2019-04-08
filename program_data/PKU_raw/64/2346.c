int main(){
    int n, xz[100], yz[100], zz[100], xx[100], yy[100];
    double jl[100];
    double j[100];
    int c=0;
    int t, m, l;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
            scanf("%d %d %d",&xz[i], &yz[i], &zz[i]);
    }
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
        jl[c]=(zz[b]-zz[a])*(zz[b]-zz[a])+(xz[b]-xz[a])*(xz[b]-xz[a])+(yz[b]-yz[a])*(yz[b]-yz[a]);
        xx[c]=a;
        yy[c]=b;
        c=c+1;
    }
    }
    for(int k=1;k<=c;k++){
    for(int i=0;i<c-k;i++){
        if(jl[i]<jl[i+1]){
            t=jl[i];
            jl[i]=jl[i+1];
            jl[i+1]=t;
            m=xx[i];
            xx[i]=xx[i+1];
            xx[i+1]=m;
            l=yy[i];
            yy[i]=yy[i+1];
            yy[i+1]=l;
        }
    }
    }
    for(int w=0;w<c;w++){
        j[w]=sqrt(jl[w]);
    }
    for(int s=0;s<c;s++){
       printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xz[xx[s]], yz[xx[s]], zz[xx[s]], xz[yy[s]], yz[yy[s]], zz[yy[s]], j[s]);
    }
    return 0;}
