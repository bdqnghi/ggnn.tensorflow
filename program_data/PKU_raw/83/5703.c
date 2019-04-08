int main(){
    int n,i,x=0;
    scanf("%d",&n);
    int xuefen[n];
    int defen[n];
    double jidian[n];
    double GPA,y=0;
    for(i=0;i<n;i++){
        scanf("%d",&(xuefen[i]));
    }
    for(i=0;i<n;i++){
        scanf("%d",&(defen[i]));
    }
    for(i=0;i<n;i++){
        if(defen[i]>=90){
            jidian[i]=4.0;
        }else if((defen[i]>=85)&&(defen[i]<=89)){
            jidian[i]=3.7;
        }else if((defen[i]>=82)&&(defen[i]<=84)){
            jidian[i]=3.3;
        }else if((defen[i]>=78)&&(defen[i]<=81)){
            jidian[i]=3.0;
        }else if((defen[i]>=75)&&(defen[i]<=77)){
            jidian[i]=2.7;
        }else if((defen[i]>=72)&&(defen[i]<=74)){
            jidian[i]=2.3;
        }else if((defen[i]>=68)&&(defen[i]<=71)){
            jidian[i]=2.0;
        }else if((defen[i]>=64)&&(defen[i]<=67)){
            jidian[i]=1.5;
        }else if((defen[i]>=60)&&(defen[i]<=63)){
            jidian[i]=1.0;
        }else if(defen[i]<60){
            jidian[i]=0.0;
        }
    }
    for(i=0;i<n;i++){
        y+=xuefen[i]*jidian[i];
    }
    for(i=0;i<n;i++){
        x+=xuefen[i];
    }
    GPA=y/x;
    printf("%.2lf",GPA);
    return 0;    
}


