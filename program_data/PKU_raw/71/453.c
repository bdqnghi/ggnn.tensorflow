int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int judge[100];
int main()
{
    memset(judge,0,sizeof judge);
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int year,month1,month2;
        cin>>year>>month1>>month2;
        if(month1>month2)
        {
            int temp=month1;
            month1=month2;
            month2=temp;
        }
        int day=0,j;

        if(month1==month2) day=0;
        else if((year%4==0&&year%100!=0)||year%400==0)
        {
            for(j=month1;j<month2;j++)  day+=b[j];
        }
        else
        {
            for(j=month1;j<month2;j++) day+=a[j];
        }
        if(day%7==0) judge[i]=1;
        else judge[i]=0;


    }
    for(i=1;i<=n;i++)
    {

        if(judge[i]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
