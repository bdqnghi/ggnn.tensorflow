int main(){
    int n;
    int xf[11],df[11];
    double zj=0;
    double GPA=0;
    double zxf=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&xf[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&df[i]);
    }
    for(int i=0;i<n;i++){
        if(df[i]>=90&&df[i]<=100)zj=zj+4.0*xf[i];
        else if(df[i]>=85&&df[i]<=89)zj=zj+3.7*xf[i];
        else if(df[i]>=82&&df[i]<=84)zj=zj+3.3*xf[i];
        else if(df[i]>=78&&df[i]<=81)zj=zj+3.0*xf[i];
        else if(df[i]>=75&&df[i]<=77)zj=zj+2.7*xf[i];
        else if(df[i]>=72&&df[i]<=74)zj=zj+2.3*xf[i];
        else if(df[i]>=68&&df[i]<=71)zj=zj+2.0*xf[i];
        else if(df[i]>=64&&df[i]<=67)zj=zj+1.5*xf[i];
        else if(df[i]>=60&&df[i]<=63)zj=zj+1.0*xf[i];
        else if(df[i]<60)zj=zj;
        
    }
    for(int i=0;i<n;i++){
        zxf=zxf+xf[i];
    }
    GPA=zj/zxf;
    printf("%.2lf",GPA);
}