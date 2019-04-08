

int main()
{
    int k;
    int a[100][100];
    cin>>k;                                    //??k???
    int m,n;
    int i,j;
    int sum;
    for(int l=0; l<k; l++)
    {
        sum=0;
        cin>>m>>n;                            //??????
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                cin>>*(*(a+i)+j);            //????????
            }
        for(j=0; j<n; j++)
        {
            if(m-1!=0) sum+=*(*(a+0)+j)+*(*(a+m-1)+j);    //??????????????
            else sum+=*(*(a+0)+j);                        //????1?
        }
        for(i=1; i<m-1; i++)
        {
            sum+=*(*(a+i)+0)+*(*(a+i)+n-1);    //???????????????????sum?
        }
        cout<<sum<<endl;                                       //????
    }
    return 0;
}
