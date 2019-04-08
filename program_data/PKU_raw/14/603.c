
int main()
{
    int Student_Num;
    cin>>Student_Num;
//??
    struct A
    {
        int ID;
        int chinese;
        int math;
        int total;
    }student[100000+10],a[3];
//?????
    for(int i=0;i<=Student_Num-1;i++)
    {
        cin>>student[i].ID;
        cin>>student[i].chinese;
        cin>>student[i].math;
        student[i].total=student[i].math+student[i].chinese;
    }
//????
    a[0]=a[1]=a[2]=student[0];
    for(int i=0;i<=Student_Num-1;i++)
    {
        if(student[i].total>a[0].total)a[0]=student[i];
    }
    for(int i=0;i<=Student_Num-1;i++)
    {
        if(student[i].total>a[1].total&&student[i].total<=a[0].total&&student[i].ID!=a[0].ID)a[1]=student[i];
    }
    for(int i=0;i<=Student_Num-1;i++)
    {
        if(student[i].total>a[2].total&&student[i].total<=a[1].total&&student[i].ID!=a[0].ID&&student[i].ID!=a[1].ID)a[2]=student[i];
    }
//??
    for(int i=0;i<=2;i++)
    {
        cout<<a[i].ID<<" "<<a[i].total<<endl;
    }
//??
    return 0;
}