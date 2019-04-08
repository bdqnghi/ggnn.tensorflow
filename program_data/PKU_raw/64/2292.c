int main() {
    int n,i,h,k,m;
    scanf("%d",&n);
    double dj[30];
    struct dian {
        double x,y,z;
    } d[10];
    struct jl {
        double x1,y1,z1,x2,y2,z2;
        double c;
    } cd[46];
    for(i=0;i<3*n;i++){
        scanf("%lf",&(dj[i]));}
    for(i=0;i<n;i++){
        d[i].x=dj[3*i];
        d[i].y=dj[3*i+1];
        d[i].z=dj[3*i+2];}
    k=0;
    for(i=0;i<n-1;i++){
        for(h=1;h<n-i;h++){
            cd[k].x1=d[i].x;
            cd[k].y1=d[i].y;
            cd[k].z1=d[i].z;
            cd[k].x2=d[i+h].x;
            cd[k].y2=d[i+h].y;
            cd[k].z2=d[i+h].z;
            cd[k].c=sqrt(((cd[k].x1-cd[k].x2)*(cd[k].x1-cd[k].x2)+(cd[k].y1-cd[k].y2)*(cd[k].y1-cd[k].y2)+(cd[k].z1-cd[k].z2)*(cd[k].z1-cd[k].z2)));
            k++;}}
    m=k;
    for(k=1;k<m;k++){
        for(i=0;i<m-k;i++){
            if((cd[i].c)<(cd[i+1].c)){
                cd[45]=cd[i+1];
                cd[i+1]=cd[i];
                cd[i]=cd[45];}}}
    for(i=0;i<m;i++){
        printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",cd[i].x1,cd[i].y1,cd[i].z1,cd[i].x2,cd[i].y2,cd[i].z2,cd[i].c);}
    return 0;}