int yinshu[10000];
int j=0;
int temp=0;
int main()
{
    void fenjie(int j,int sum);
    int t,n[10000],i;
    cin>>t;
    for(i=0;i<10000;i++)
    {
        yinshu[i]=0;
    }
    for(i=0;i<t;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<t;i++)
    {
        fenjie(1,n[i]);
        cout<<temp<<endl;
        temp=0;
    }
    return 0;
}
void fenjie(int j,int sum)
{
    for(int i=2;i<=sum;i++)
    {
        if(sum%i==0&&yinshu[j-1]<=i)
        {
            yinshu[j]=i;
            if(sum==i)
            {
                temp++;
            }
            else
            {
                fenjie(j+1,sum/i);
            }
        }
    }
}
