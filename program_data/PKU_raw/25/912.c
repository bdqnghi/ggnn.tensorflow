int main()
{
    int N;
    cin>>N;
    int a[500]={0};
    int b[500]={0};
    if(N==0)cout<<"1";
    else 
    {
    a[0]=2;
    for(int i = 0 ; i < N-1 ; i++)
    {
            for(int j = 0 ; j < 500 ; j++)
            {
                    if((a[j]*2)<10)a[j]=a[j]*2;
                    else 
                    {
                         a[j]=(a[j]*2)%10;
                         b[j+1]=1;
                    }
            }
            for(int j = 0 ; j < 500 ; j++)a[j]=a[j]+b[j],b[j]=0;
    } 
    int flag=0;
    for(int i = 499 ; i >= 0 ; i--)
    {
            if(a[i]!=0 || flag==1)
            {
                       flag=1;
                       cout<<a[i];
            }
    }
}
    return 0;
}