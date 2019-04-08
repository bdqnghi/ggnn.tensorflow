

int main()
{
    int nn,n; cin>>nn; //nn??????n

    int a[101][101];
    for (int k=0;k<nn;k++)
    {
        int ans=0;
        for (int i=0;i<nn;i++)
            for (int j=0;j<nn;j++)
                cin>>a[i][j];
        for (int n=nn;n>1;n--)
        {
                int minh[101],minl[101];
                for (int i=0;i<n;i++) minh[i]=1000000;
                for (int i=0;i<n;i++) minl[i]=1000000;

                for (int i=0;i<n;i++)
                    for (int j=0;j<n;j++)
                        if (a[i][j]<minh[i]) minh[i]=a[i][j];
                for (int i=0;i<n;i++)
                    for (int j=0;j<n;j++)
                        a[i][j]=a[i][j]-minh[i];

                        /* for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++)
                        cout<<a[i][j]<<' '; cout<<endl;}
                cout<<endl;*/
                for (int i=0;i<n;i++)
                    for (int j=0;j<n;j++)
                        if (a[j][i]<minl[i]) minl[i]=a[j][i];
                for (int i=0;i<n;i++)
                    for (int j=0;j<n;j++)
                        a[j][i]=a[j][i]-minl[i];
            //???“????”

           /*     for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++)
                        cout<<a[i][j]<<' '; cout<<endl;}
                cout<<endl;*/

                ans+=a[1][1];

                for (int i=2;i<n;i++) a[0][i-1]=a[0][i];
                for (int i=2;i<n;i++) a[i-1][0]=a[i][0];

                for (int i=2;i<n;i++)
                    for (int j=2;j<n;j++)
                        a[i-1][j-1]=a[i][j];

             /*   for (int i=0;i<n-1;i++){
                    for (int j=0;j<n-1;j++)
                        cout<<a[i][j]<<' '; cout<<endl;}
                cout<<endl;*/
            }
            cout<<ans<<endl;


    }







    return 0;
}
