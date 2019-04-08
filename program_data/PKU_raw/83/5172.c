int main (){
    int i,k,xf[10],df[10];
    double GPA,result;
    double s=0;
    double num=0;
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    scanf("%d",&xf[i]);
    for(i=0;i<=k-1;i++)
    scanf("%d",&df[i]);
    for(i=0;i<=k-1;i++){
        if(90<=df[i]&&df[i]<=100){
            result=4.0*xf[i];
        }
        if(85<=df[i]&&df[i]<=89){
            result=3.7*xf[i];
        }
        if(82<=df[i]&&df[i]<=84){
            result=3.3*xf[i];
        }
        if(78<=df[i]&&df[i]<=81){
            result=3.0*xf[i];
        }
        if(75<=df[i]&&df[i]<=77){
            result=2.7*xf[i];
        }
        if(72<=df[i]&&df[i]<=74){
            result=2.3*xf[i];
        }
        if(68<=df[i]&&df[i]<=71){
            result=2.0*xf[i];
        }
        if(64<=df[i]&&df[i]<=67){
            result=1.5*xf[i];
        }
        if(60<=df[i]&&df[i]<=63){
            result=1.0*xf[i];
        }
        if(df[i]<60){
            result=0;
        }
        num=num+result;
        s=xf[i]+s;
        }

        GPA=num/s;
        printf("%.2lf",GPA);
        return 0;
    }
    
