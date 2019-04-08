int n,len1=0,len2=0;
char a1[101];
char b1[101];
int a[101],b[101];
int main()
{
    int i,j,k,m,t=0;
    cin>>n;
    for(i=0;i<n;++i)
    {
            cin>>a1>>b1;
            len1=0;
            len2=0;
            m=0;
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            while(a1[len1]) len1++;
            while(b1[len2]) len2++;
            for(j=len1-1;j>=0;--j) a[j]=(int)a1[len1-j-1]-48;
            for(j=len2-1;j>=0;--j) b[j]=(int)b1[len2-j-1]-48;
            if(len1<len2)
            {
                    t=len1;
                    len1=len2;
                    len2=t;
                    for(j=0;j<101;++j)
                    {
                            t=a[j];
                            a[j]=b[j];
                            b[j]=t;
                    }
                    cout<<"-";
            }
            for(j=0;j<len1;++j)
            {
                    a[j]-=b[j];
            }
            for(j=0;j<len1;++j)
            {
                    while(a[j]<0)
                    {
                            a[j]+=10;
                            a[j+1]-=1; 
                    }
            }
            for(j=len1-1;j>=0;--j)
            {
                    if(a[j]) m=1;
                    if(m) cout<<a[j];
            }
            cout<<endl;
    }
    return 0;
}        
                               
                            

