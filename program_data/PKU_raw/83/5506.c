int main(){
    int n,i;
    scanf("%d",&n);
    int point[n],score[n];
    double grade[n],gpa[n];
    double average,total,sum;
    total=0;
    sum=0;
    for(i=1;i<=n;i++){
        scanf("%d",&point[i]);
    }
    for(i=1;i<=n;i++){
        scanf("%d",&score[i]);
        
    }
    for(i=1;i<=n;i++){
        if(score[i]>=90){
            grade[i]=4.0;
        }else if(score[i]>=85){
            grade[i]=3.7;
        }else if(score[i]>=82){
            grade[i]=3.3;
        }else if(score[i]>=78){
            grade[i]=3.0;
        }else if(score[i]>=75){
            grade[i]=2.7;
        }else if(score[i]>=72){
            grade[i]=2.3;
        }else if(score[i]>=68){
            grade[i]=2.0;
        }else if(score[i]>=64){
            grade[i]=1.5;
        }else if(score[i]>=60){
            grade[i]=1.0;
        }else{
            grade[i]=0;
        }
        gpa[i]=grade[i]*point[i];
    }
    for(i=1;i<=n;i++){
        total+=gpa[i];
        sum+=point[i];
    }
    average=total/sum;
    printf("%.2lf",average);
    return 0;
}
