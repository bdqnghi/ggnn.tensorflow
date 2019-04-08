int main()
{
    int a[200],i,s=0,cnt=0,q,j;
    while(1)
    {
            s=0;
            cnt=0;
            cin>>a[1];
            if(a[1]==-1)break;
            for(i=2;a[i-1]!=0;i++)
            {
                                  cin>>a[i];
                                  cnt++;
            }
            for(i=1;i<=cnt-1;i++)
            {
                                 for(j=i+1;j<=cnt;j++)
                                 {
                                                      if(a[i]==2*a[j]||2*a[i]==a[j])
                                                      s++;
                                 }
            }
            cout<<s<<endl;
            
    }
    cin>>q;
    return 0;
}