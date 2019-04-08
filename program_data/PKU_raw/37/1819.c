int main()
{
    int t, i, j, k, l, count[26]={0}, len, flag[50];
    char ans[50], str[100010];
    cin>>t;
    cin.get();
    for(i=1;i<=t;i++)
    {
        flag[i]=0;
        for(l=0;l<26;l++)
        {
            count[l]=0;             
        }
        cin.getline(str,100000);
        len=strlen(str);
        for(k=0;k<len;k++)
        {
            count[(int)(str[k]-96)]+=1;                 
        }
        for(j=0;j<len;j++)
        {
            if(count[(int)(str[j]-96)]==1)
            {
                ans[i]=str[j];
                flag[i]=1;
                break;
            }                 
        } 
    }
    for(i=1;i<=t;i++)
    {
        if(flag[i]==1)
        cout<<ans[i]<<endl;
        else
        cout<<"no"<<endl;              
    
    } 
    int x;cin>>x;
    return 0;
}
