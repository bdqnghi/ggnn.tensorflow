int main()
{
    int n,m,i,j,k,sum,time;//counter
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        j=m;
        k=0;
        while(j>0)
        {
            cin>>k;
            j--;
            if((k+(m-j)*3)>60)
            break;
        }
        if((k+(m-j)*3)<=60)
        cout<<60-(m-j)*3<<endl;
        else
        {
            if(k+m*3-j*3-60>3)
            cout<<60-(m-j)*3+3<<endl;
            else
            cout<<k<<endl;
        }
        for(;j>0;j--)
        cin>>k;
    }    return 0;
}
