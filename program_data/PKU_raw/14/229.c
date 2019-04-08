/*????????
 *?????
 *???1000010549
 *???2010-12-25
 */


struct student{
    int num;
    int scorec;
    int scorem;
    int score;
};

int main(){
    int n;
    int i;
    struct student stu[100001];
    int best[2][3]={{0,0,0},{0,0,0}};
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>stu[i].num>>stu[i].scorec>>stu[i].scorem;
        stu[i].score=stu[i].scorec+stu[i].scorem;
    }
    for(i=1;i<=n;i++)
    {
        if(stu[i].score>best[1][0])
        {
            best[0][2]=best[0][1];
            best[0][1]=best[0][0];
            best[0][0]=stu[i].num;
            best[1][2]=best[1][1];
            best[1][1]=best[1][0];
            best[1][0]=stu[i].score;
        }
        else if(stu[i].score<=best[1][0]&&stu[i].score>best[1][1])
        {
            best[0][2]=best[0][1];
            best[0][1]=stu[i].num;
            best[1][2]=best[1][1];
            best[1][1]=stu[i].score;
        }
        else if(stu[i].score<=best[1][1]&&stu[i].score>best[1][2])
        {
            best[0][2]=stu[i].num;
            best[1][2]=stu[i].score;
        }
    }
    for(i=0;i<3;i++)
        cout<<best[0][i]<<' '<<best[1][i]<<endl;
    return 0;
}
