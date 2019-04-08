int aa[20];

int main()
{
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>m;
            for(int i=0;i<m;i++)
              cin>>aa[i];
            if(m==0) 
            {
                     cout<<"60"<<endl;
                     continue;
            }
            for(int j=0;j<m;j++)
            {
                    if((aa[j]+3*j)>=57 && (aa[j]+3*j)<=60)
                    {cout<<aa[j]<<endl; break;}
                    if((aa[j]+3*j)>60)
                    {
                                      int x=60-3*j;
                                      cout<<x<<endl;
                                      break;
                    }
                    else if(j==m-1)
                    {cout<<60-3*m<<endl;break;}
            }
            
    }
    return 0;
}             
