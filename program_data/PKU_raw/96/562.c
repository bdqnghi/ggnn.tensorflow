int main()
{
    char setline[400];
    int an[400],res[400];
    while(cin>>setline)
    {
        int i,j,k,len,len2;
        memset(an,0,400);
        memset(res,0,400);
        len=strlen(setline);


        for(i=0;i<len;i++)
        {
            an[i]=setline[i]-'0';
        }


        res[0]=an[0]/13;
        for(i=0;i<len-1;i++)
        {
            res[i+1]=((an[i]%13)*10+an[i+1])/13;//cout<<(an[i]%13)*10+an[i+1]<<' ';
            an[i+1]=(an[i]%13)*10+an[i+1];

        }
        len2=an[len-1]%13;
        if(len==1) cout<<0;
        else if(len==2&&an[1]<13) cout<<0;
        else
        {i=0;
        while(res[i]==0) i++;
        for(i;i<len;i++)
        cout<<res[i];}
        cout<<endl<<len2<<endl;

        //for(i=0;i<len;i++) cout<<an[i]<<" ";
    }
    return 0;
}
