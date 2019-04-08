
main()
{
    struct student
    {int num;
     int sc;
     int sm;
     int score;
    } student[100001];
    int n,i,j,k,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {scanf("%d %d %d",&student[i].num,&student[i].sc,&student[i].sm);}
    for(i=1;i<=n;i++) {student[i].score=(student[i].sc+student[i].sm);}
    int x,y,z,r,s,t,a,b,d;
    a=1;
    b=1;
    d=1;
    for(i=n;i>=1;i--) if(student[i].score>=a) {a=student[i].score;x=i;}
    for(i=n;i>=1;i--) 
    {
                      if((i!=x)&&(student[i].score>=b)) {b=student[i].score;y=i;}
    }
    for(i=n;i>=1;i--)
    {
                      if((i!=x)&&(i!=y)&&(student[i].score>=d)) {d=student[i].score;z=i;}
    }
    
    printf("%d %d\n%d %d\n%d %d",student[x].num,student[x].score,student[y].num,student[y].score,student[z].num,student[z].score);
}
