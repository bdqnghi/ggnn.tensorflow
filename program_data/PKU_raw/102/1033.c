int main(){
    int n,e=0,w=0;
    char sex[50][9];
    double height[50],mh[50],fh[50],temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %lf",sex[i],&height[i]);
        if(sex[i][0]=='m'){
            mh[e++]=height[i];
        }else fh[w++]=height[i];
    }
    for(int k=1;k<=e+1;k++){
        for(int j=0;j<e-k;j++){
            if(mh[j]>mh[j+1]){
                temp=mh[j];
                mh[j]=mh[j+1];
                mh[j+1]=temp;
            }
        }
    }
    for(int i=0;i<e;i++){
    printf("%.2lf ",mh[i]);
    }
    for(int k=1;k<=w+1;k++){
        for(int j=0;j<w-k;j++){
            if(fh[j]<fh[j+1]){
                temp=fh[j];
                fh[j]=fh[j+1];
                fh[j+1]=temp;
            }
        }
    }
    for(int i=0;i<w-1;i++){
    printf("%.2lf ",fh[i]);
    }
    printf("%.2lf",fh[w-1]);
    return 0;

    
}