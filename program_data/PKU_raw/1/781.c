int tot;

void find(int m,int n)
{
    int i,j,k;
    if (m==1) tot=tot+1;
    else 
    {
        for (i=n;i<=m;i++)
        if(m%i==0)
           find (m/i,i);         
    }
}

int main()
{
    int i,j,k,m,n;
    cin >>n;
    for (i=1;i<=n;i++)
    {
        tot=0;
        cin >>m;
        find(m,2);
        cout <<tot<<endl;    
    }    
    cin >>n;
    return 0;
}
