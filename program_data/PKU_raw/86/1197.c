int main()
{
    int m,n,i,j,N[60],sum;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>m;
        if(m==0)
        cout<<60<<endl;
        else
        {
        for(i=0;i<m;i++)
        cin>>N[i];
        i=m-1;
        while(N[i]+3*i>60)
        i--;
        if(N[i]+3*(i+1)>60)
        sum=N[i];
        else
        sum=60-3*(i+1);
        cout<<sum<<endl;
    }
    }
    return 0;
}
