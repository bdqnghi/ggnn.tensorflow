
int k;
int arr[30];
int num[30];

int main()
{
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    for(int i=0;i<k;i++)
        num[i]=1;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>=arr[i]&&num[j]>=num[i])
                num[i]=num[j]+1;
        }
    }
    int res=-1;
    for(int i=0;i<k;i++)
        if(num[i]>res)
            res=num[i];
    cout<<res<<endl;
    return 0;
}
