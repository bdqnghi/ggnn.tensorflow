int main()
{
    int n;cin>>n;
    int answer1[40]={0};
    answer1[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<40;j++)       //??????
        {
            answer1[j]=answer1[j]*2;
        }
        for(int j=0;j<40;j++)
        {
            if(answer1[j]>=10)
            {
                answer1[j]=answer1[j]-10;
                answer1[j+1]++;
            }
        }
    }
    for(int i=37;i>=0;i--)
    {
        if(answer1[i]!=0||answer1[i+1]!=0||answer1[i+2])
            cout<<answer1[i];            //????
    }
    return 0;
}
