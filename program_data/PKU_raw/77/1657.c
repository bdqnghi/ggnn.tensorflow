int main()
{
    int a[100]={0};
    char c;
    cin>>c;
    a[0]=1;
    for(int i=1;i<100;i++)
    {
        char b;
        cin>>b;
        if(b==c)
        a[i]=1;
        else
        a[i]=-1;
    }
    for(int j=0;j<100;j++)
    {
        if(a[j]==-1)
        {
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]==1)
                {
                cout<<k<<" "<<j<<endl;
                a[k]=0;
                a[j]=0;
                break;
                }
            }
        }
    }
    
    return 0;
}
            
