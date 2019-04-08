int main()
{
    int n,i,j,k,l,min=0,num;
    int s[100][100];
    cin>>n;
    for(l=1;l<=n;l++)
    {
        num=0;
        memset(s,0,sizeof(s));
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                cin>>*(*(s+i)+j);
        for(k=0;k<=n-2;k++)
        {
            for (i=1;i<=n-k;i++)
            {
                min=s[i][1];
                for(j=1;j<=n-k;j++)
                {
                    if(*(*(s+i)+j)<min) min=*(*(s+i)+j);
                }
                for(j=1;j<=n-k;j++)
                {
                    *(*(s+i)+j)-=min;
                }
            }
            for (j=1;j<=n-k;j++)
            {
                min=s[1][j];
                for(i=1;i<=n-k;i++)
                {
                    if(*(*(s+i)+j)<min) min=*(*(s+i)+j);
                }
                for(i=1;i<=n-k;i++)
                {
                    *(*(s+i)+j)-=min;
                }
            }
            num+=s[2][2];
            for (i=1;i<=n-k;i++)
                for (j=2;j<=n-k-1;j++)
                    *(*(s+i)+j)=*(*(s+i)+j+1);
            for (j=1;j<=n-k;j++)
                for (i=2;i<=n-k-1;i++)
                    *(*(s+i)+j)=*(*(s+i+1)+j);
        }
        cout << num << endl;
    }
    return 0;
}