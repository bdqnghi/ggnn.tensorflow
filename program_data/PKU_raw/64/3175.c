int main(){
    int n,y;
    scanf("%d\n",&n);
    int x[1000][3];
    double jl[100][100],o;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x[i][0],&x[i][1],&x[i][2]);
    }
    for(int i=0;i<n-1;i++){
        for(int k=i+1;k<n;k++){
            jl[i][k]=sqrt((x[i][0]-x[k][0])*(x[i][0]-x[k][0])+(x[i][1]-x[k][1])*(x[i][1]-x[k][1])+(x[i][2]-x[k][2])*(x[i][2]-x[k][2]));
        }
    }
    int m,p,q,a=0;
    m=n*(n-1)/2;
    for(int i=0;i<9;i++){
        if(a==m){
            break;
        }
        for(int k=i+1;k<10;k++){
            if(o<jl[i][k]){
                o=jl[i][k];
                p=i;
                q=k;
            }
            if(i==8&&k==9){
                printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[p][0],x[p][1],x[p][2],x[q][0],x[q][1],x[q][2],o);
                jl[p][q]=0;
                i=-1;
                o=0;
                a++;
            }
        }
    }
    return 0;
}
