int main()
{
    int score[10] = {90, 85, 82, 78, 75, 72, 68, 64, 60, 0};
    double gpa[10] = {4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.5, 1.0, 0};
    int s;
    double g;    
    int i, j, a, b, c;
    double e=0, f=0, GPA;
    scanf("%d", &b);
    int all[10], real[10];
    for(i=0;i<b;i++)
       scanf("%d", &all[i]);
    for(i=0;i<b;i++)
       scanf("%d", &real[i]);
    
    for(i=0;i<b;i++) {
        for(j=0; j<10; j++)
        {
             if (real[i]>=score[j]) 
             {
                  g=gpa[j];
                  break;
             }
        }
        e+=g*all[i];    
        f+=all[i];
    }
    GPA=e/f;
    printf("%.2lf",GPA);	
}