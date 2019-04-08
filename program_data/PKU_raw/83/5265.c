int main(){
    int n,i,s;
    double GPA,x;
    int xuefen[10];
    int defen[10];
    double jidian[10];
    scanf("%d\n",&n);
    for(i=0;i<=n-2;i++){
        scanf(" %d",&(xuefen[i]));
    }
    scanf(" %d\n",&(xuefen[n-1]));
    for(i=0;i<=n-1;i++){
        scanf(" %d",&(defen[i]));
    }for(i=0,s=0;i<=n-1;i++){
        s=s+xuefen[i];
    }for(i=0;i<=n-1;i++){
        if(defen[i]>=90){
            jidian[i]=4.0;
        }else if(defen[i]>=85&&defen[i]<=89){
            jidian[i]=3.7;
        }else if(defen[i]>=82&&defen[i]<=84){
            jidian[i]=3.3;
        }else if(defen[i]>=78&&defen[i]<=81){
            jidian[i]=3.0;
        }else if(defen[i]>=75&&defen[i]<=77){
            jidian[i]=2.7;
        }else if(defen[i]>=72&&defen[i]<=74){
            jidian[i]=2.3;
        }else if(defen[i]>=68&&defen[i]<=71){
            jidian[i]=2.0;
        }else if(defen[i]>=64&&defen[i]<=67){
            jidian[i]=1.5;
        }else if(defen[i]>=60&&defen[i]<=63){
            jidian[i]=1.0;
        }else if(defen[i]<60){
            jidian[i]=0;
        }
    }for(i=0;i<=n-1;i++){
        x=x+1.0*jidian[i]*xuefen[i];
    }GPA=x/s;
    printf("%.2lf\n",GPA);
    return 0;
}
