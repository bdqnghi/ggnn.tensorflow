int main() 
{ 
    int n,m,k,c,i,b;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
              cin>>m;;
              c=0;
              for(b=1;b<=m;b++)
              {
                        cin>>k;
                        if(c+k<60)
                        if(c+k+3<60)
                        c=c+3;
                        else 
                        c=60-k;
              }
              a[i]=(60-c);
    }
    for(i=1;i<=n;i++)
    {
                     cout<<a[i]<<endl;
    }
    return 0; 
}