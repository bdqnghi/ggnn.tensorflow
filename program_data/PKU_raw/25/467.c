char r[101];
int main()
{
    int N,i,j,k,num;
    cin>>N;
    r[0]='1';
    if(N==0)
    {
        cout<<1;
        return 0;
    }
    else 
    {
        for(i=1;i<=N;i++)
        {
              k=0;
              for(j=0;j<strlen(r);j++)
                {
                    if (r[j]>='0'&&r[j]<='4')
                    {   
                        r[j]='0'+2*(r[j]-'0')+k;
                        k=0;
                    }
                    else
                    {
                        r[j]='0'+2*(r[j]-'5')+k;
                        k=1;
                    }
                }
                if(k==1) r[j]='1';
            
        }
    }
    for (i=strlen(r)-1;i>=0;i--)
    cout << r[i];
    return 0;
}

