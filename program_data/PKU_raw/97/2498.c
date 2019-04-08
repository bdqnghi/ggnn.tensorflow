int money[6]={100,50,20,10,5,1};   //???? 
int need,ans[6];                   //????? 
int main()
{
    int i=0;
    cin>>need;                     //???? 
    while(need>0)
    {
        while(need>=money[i])
        {
            ans[i]++;
            need-=money[i];
        }
        i++;
    }                              //?????????? 
    for(i=0;i<6;++i) cout<<ans[i]<<endl;
    return 0;                      //????????? 
}
