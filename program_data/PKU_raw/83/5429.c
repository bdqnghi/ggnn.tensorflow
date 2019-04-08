int main(){
    int i,n;
    double GPA;
    double sum1=0;
    double sum2=0;
    int xf[10];
    int df[10];
    double gpa[10];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        if(i==n-1){
            scanf("%d\n",&(xf[i]));
        }else{
            scanf("%d",&(xf[i]));
        }
    }
    for(i=0;i<n;i++){
        scanf("%d",&(df[i]));
    }
    for(i=0;i<10;i++){
        if(df[i]>=90){
            gpa[i]=4.0;
        }else if(df[i]>=85){
            gpa[i]=3.7;
        }else if(df[i]>=82){
            gpa[i]=3.3;
        }else if(df[i]>=78){
            gpa[i]=3.0;
        }else if(df[i]>=75){
            gpa[i]=2.7;
        }else if(df[i]>=72){
            gpa[i]=2.3;
        }else if(df[i]>=68){
            gpa[i]=2.0;
        }else if(df[i]>=64){
            gpa[i]=1.5;
        }else if(df[i]>=60){
            gpa[i]=1.0;
        }else{
            gpa[i]=0;
        }
    }
    for(i=0;i<n;i++){
        sum1+=xf[i]*gpa[i];
        sum2+=xf[i];
    }
    GPA=1.0*sum1/sum2;
    printf("%.2lf",GPA);
    return 0;
}

