
int main()
{
    int people;
    cin>>people;
    int num=0;
    while(true)
    {
        int badjump[20]={0};
        int n;
        cin>>n;
        for(int i=0;i<=n-1;i++)
        {
            cin>>badjump[i];
        }
        int realtime;
        int realjump=0;
        int j=0;
        for(realtime=1;;realtime++)
        {
            realjump++;
            if(realtime==3*j+badjump[j])
            {
                realtime+=3;
                j++;
            }
            if(realtime>=60)break;
        
        }
        cout<<realjump<<endl;
        
        num++;
        if(num==people)break;
    }
    return 0;
}
