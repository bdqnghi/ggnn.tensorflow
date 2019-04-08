int main(){
    int n;
    scanf("%d",&n);
    int d[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&d[i][j]);
        }
    }
    int c=n*(n-1)/2;
    double len[c];
    for(int i=0;i<c;i++){
        len[i]=0;
    }
    int b=0;
    int o[c], p[c], q[c], r[c], s[c], t[c];
    for(int i=0;i<(n-1);i++){
        for(int j=i+1;j<n;j++){
            double tmp=0;
            tmp=1.0*sqrt((d[i][0]-d[j][0])*(d[i][0]-d[j][0])+(d[i][1]-d[j][1])*(d[i][1]-d[j][1])+(d[i][2]-d[j][2])*(d[i][2]-d[j][2]));
            len[b]=tmp;
            o[b]=d[i][0];
            p[b]=d[i][1];
            q[b]=d[i][2];
            r[b]=d[j][0];
            s[b]=d[j][1];
            t[b]=d[j][2];
            b=b+1;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=c-1;j>i;j--){
            if (len[j]>len[j-1]){
                double tmp=0;
                tmp=len[j-1];
                len[j-1]=len[j];
                len[j]=tmp;
                int y=0;
                y=o[j-1];
                o[j-1]=o[j];
                o[j]=y;
                y=0;
                y=p[j-1];
                p[j-1]=p[j];
                p[j]=y;
                y=0;
                y=q[j-1];
                q[j-1]=q[j];
                q[j]=y;
                y=0;
                y=r[j-1];
                r[j-1]=r[j];
                r[j]=y;
                y=0;
                y=s[j-1];
                s[j-1]=s[j];
                s[j]=y;
                y=0;
                y=t[j-1];
                t[j-1]=t[j];
                t[j]=y;
            }
        }
    }
    for(int i=0;i<c;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",o[i], p[i], q[i], r[i], s[i], t[i], len[i]);
    }
    return 0;
}


