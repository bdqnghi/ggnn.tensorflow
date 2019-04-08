
int main()
{
    char ch1[100],ch2[100];
    cin>>ch1>>ch2;
    int i,j;
    int len1=strlen(ch1),len2=strlen(ch2);
    int len=len1,judge[len-1],ijudge=1,ij=0;
    if(len1!=len2)  cout<<"NO"<<endl;
    else
    {
        for(i=0;i<len;i++)
        {
            ij=0;
            for(j=0;j<len;j++)
            {
                if(ch1[i]==ch2[j])
                {
                    ij=1;
                    judge[i]=1;
                    ch1[i]='&';
                    ch2[j]='&';
                }
            }
            if(ij==0) judge[i]=0;
        }
        for(i=0;i<len;i++)
        {
            if(judge[i]==0) 
            {
                ijudge=0;
                break;
            }
        }
        if(ijudge==1) cout<<"YES";
        else cout<<"NO";
    }
    
    return 0;
}
