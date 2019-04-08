int main()
{
        int n,i=1,j=1,k=1,l,t;
        char a[100000];
        char x;
        cin>>n;
        for(;k<=n;k++)
        {
                cin>>a;
                l=strlen(a);
                for(i=0;i<l-1;i++)
                {
                        t=a[i];
                        for(j=i+1;j<l;j++)
                        {
                                if(a[j]==1) continue;
                                if(a[j]==t)
                                {
                                        a[i]=1;
                                        a[j]=1;
                                }
                        }
                }
                for(i=0;i<=l;i++)
                {
                        if(a[i]!=1)
                        {
                                cout<<a[i]<<endl;
                                break;
                        }
                }
                if(i==l) cout<<"no"<<endl;
        }
        return 0;
}
