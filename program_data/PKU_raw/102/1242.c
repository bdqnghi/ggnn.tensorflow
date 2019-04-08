int main()
{
    int i, j, n, t;
    float m[41]={0}, f[41]={0}, h[41]={0};
    char str[41][7];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>str[i]>>h[i];
        if(strcmp(str[i],"male")==0)
        {
            m[i]=h[i];            
            //cout<<" "<<fixed<<setprecision(2)<<m[i];            
        }
        else
        {
            f[i]=h[i];
        }
             
    }
    sort(m+1,m+n+1);
    sort(f+1,f+n+1);
    for(i=1; i<=n; i++)
    {
        if(m[i]!=0)
        {
            t=i;
            cout<<fixed<<setprecision(2)<<m[i];
            for(j=t+1;j<=n;j++)
            {
                
                cout<<" "<<fixed<<setprecision(2)<<m[j]; 
                              
            }
            break;
        }
        
    }
    for(i=n; i>=1; i--)
    {
        if(f[i]==0)
            break;
        else
        {
            cout<<" "<<fixed<<setprecision(2)<<f[i];                 
        }
        
    }
    int x;cin>>x;
    return 0;
    }
