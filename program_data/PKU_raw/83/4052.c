int main()
{
    int i,n,s[10],grade[10],Sum;
    float p[10],sum,GPA;
    scanf("%d",&n);
    printf("\n");
    sum=0;
    Sum=0;
    for (i=1; i<=n; i++) {
        scanf("%d",&s[i]);
    }
    for (i=1; i<=n; i++) {
        scanf("%d",&grade[i]);
    }
    for (i=1; i<=n; i++) {
        if (grade[i]>=90&&grade[i]<=100) {
            p[i]=4.0;
        }
        else if(grade[i]>=85){
            p[i]=3.7;
        }
        else if(grade[i]>=82){
            p[i]=3.3;
        }
        else if(grade[i]>=78){
            p[i]=3.0;
        }
        else if(grade[i]>=75){
            p[i]=2.7;
        }
        else if(grade[i]>=72){
            p[i]=2.3;
        }
        else if(grade[i]>=68){
            p[i]=2.0;
        }
        else if(grade[i]>=64){
            p[i]=1.5;
        }
        else if(grade[i]>=60){
            p[i]=1.0;
        }
        else p[i]=0;        
        sum=sum+p[i]*s[i];
        Sum=Sum+s[i];
    }
    GPA=sum/Sum;
    printf("%.2f",GPA);
    return 0;
}