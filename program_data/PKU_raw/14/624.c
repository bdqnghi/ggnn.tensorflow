
int main()
{
    int N,i,j,k;
    cin>>N;
    struct Student_Num    //?????  
    {
        int num;         //?? 
        int Chinese;     //???? 
        int Math;        //???? 
    };
    struct Student_Num student[N];       //N?????? 
    struct Student_Num temp;            
    for(i=0;i<N;i++)
    {
        cin>>student[i].num>>student[i].Chinese>>student[i].Math;   //???????? 
    }
    int total[N],totalNum[3],p[3];       //????????????????????????? 
    for(i=0;i<N;i++)
    {
        total[i]=student[i].Chinese+student[i].Math;  //??? 
    }
    for(i=0;i<3;i++)               //????0 
    {
        totalNum[i]=0;
    }
    for(i=0;i<3;i++)      //????? 
    {
        for(j=0;j<N;j++)
        {
            if(totalNum[i]<total[j])
            {
                totalNum[i]=total[j];
                p[i]=j;
            }
        }
        total[p[i]]=0;   //?????????????????0??????????????? 
    }
    for(i=0;i<3;i++)
    {
        cout<<student[p[i]].num<<' '<<totalNum[i]<<endl;   //???????? 
    }
    return 0;
}