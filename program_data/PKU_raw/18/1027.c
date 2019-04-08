int main()
{

    int n,cnt,kobe;
    cin >> n;
    cnt=n;

    int (*p)[200],a[200][200]={0};
    while (cnt--)
    {
        int i,j,sum=0;
        long min;
        kobe=n;
        p=a;
        for (i=0; i<n;i++)
            for (j=0; j<n; j++)
                cin >> *(*(p+i)+j);
        for (int k=0; k<n-1; k++)
        {

            for (i=0; i<kobe;i++)
                {
                    min=999999999;
                    for (j=0; j<kobe; j++)
                        if (*(*(p+i)+j)<min)
                            min=*(*(p+i)+j);
                    for (j=0; j<kobe; j++)
                        *(*(p+i)+j)-=min;
                }
            for (j=0; j<kobe; j++)
            {
                    min=999999999;
                    for (i=0; i<kobe; i++)
                        if (*(*(p+i)+j)<min)
                            min=*(*(p+i)+j);
                    for (i=0; i<kobe; i++)
                        *(*(p+i)+j)-=min;
            }
            sum+=*(*(p+1)+1);
            for (i=1;i<kobe;i++)
                for (j=0; j<kobe; j++)
                    *(*(p+i)+j)=*(*(p+i+1)+j);
            for (j=1; j<kobe;j++)
                for (i=0;i<kobe;i++)
                    *(*(p+i)+j)=*(*(p+i)+j+1);
        kobe--;
        }
        cout << sum << endl;
        //for (i=0; i<n; i++)
            //for (j=0; j<n; j++)
                //cout << a[i][j]<<endl;

    }
    return 0;
}





