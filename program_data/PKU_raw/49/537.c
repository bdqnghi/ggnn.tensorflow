int main()
{
    char a[1000],b[1000][1000],c[1000][1000];
    int i,j,k,num=0,clen[1000],clen0[1000],p=0,shorter;
    cin>>a;
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            p=0;
            for(k=i;k<=j;k++)
            {
                b[num][p]=a[k];
                p++;
            }
            num++;
        }
    }
    int judge=0;
    for(i=0;i<num;i++)
    {
        clen[i]=strlen(b[i]);
        j=0;judge=0;
        while(1)
        {
            if(b[i][j]==b[i][clen[i]-j-1])
            {
                judge=1;
                j++;
                if(j==clen[i]) break;
                continue;
            }
            else
            {
                judge=0;
                break;
            }
        }
        
        if(judge==1&&clen[i]>1) 
        {
            strcpy(c[p],b[i]);
            clen0[p]=clen[i];
            p++;
        }
    }
    shorter=0;
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(clen0[j]<clen0[shorter])
            {
                shorter=j;
            }
        }
        cout<<c[shorter]<<endl;
        clen0[shorter]=1000;
    }

    return 0;
}