void tiao(int b)
{
    int n,i;
    int t[100]={0};
    int c[100]={0};
    cin>>n;if(n==0)cout<<"60"<<endl;
    for(i=1;i<=n;i++)
    {
                    cin>>c[i];
                    }
    for(i=1;i<=n;i++)
    {
                    t[i]=c[i]+(i-1)*3;if(t[i]>=57&&t[i]<=60){cout<<c[i]<<endl;break;}
                    else if(t[i]>60){cout<<c[i]-(t[i]-60)<<endl;break;}
                    else if(c[i+1]==0)cout<<c[i]+(60-t[i]-3)<<endl;
                    }
}
                    
                    
int main()
{
    int n1,i;
    cin>>n1;
    for(i=0;i<n1;i++)tiao(i);
    getchar();getchar();
    return 0;
}
