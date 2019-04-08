
int N,course[15][2],credit;
float GPA;
int main(){
    int i;
    scanf("%d",&N);
    credit = 0;
    for (i = 0; i < N; i++){
        scanf("%d",&course[i][0]);
        credit += course[i][0];
    }
    for (i = 0; i < N; i++) scanf("%d",&course[i][1]);
    
    for (i = 0; i < N; i++){
        float point;
        if (course[i][1] >= 90) point = 4;
        else if (course[i][1] >= 85) point = 3.7;
        else if (course[i][1] >= 82) point = 3.3;
        else if (course[i][1] >= 78) point = 3.0;
        else if (course[i][1] >= 75) point = 2.7;
        else if (course[i][1] >= 72) point = 2.3;
        else if (course[i][1] >= 68) point = 2.0;
        else if (course[i][1] >= 64) point = 1.5;
        else if (course[i][1] >= 60) point = 1.0;
        else point = 0;
        GPA += course[i][0]*point;
    }
    GPA /= credit;
    printf("%.2f\n",GPA);

    return 0;
}
