int main ()
{
    int a[200][200];
    int n=0,i,j,k,q=0,l,m,s=0;
    cin >>n;
    k=n;
while(q<k)
    {
        s=0;
    for (i=0;i<k;i++)
    {
        for (j=0;j<k;j++)
        cin >>a[i][j];
    }
    n=k;
    for (m=1;m<=k-1;m++)
    {
        for (i=0;i<n;i++)
        {
            l=a[i][0];
            for (j=0;j<n;j++)
            {
                if (l>a[i][j])
                l=a[i][j];
            }
            for (j=0;j<n;j++)
            a[i][j]=a[i][j]-l;
        }
        for (i=0;i<n;i++)
        {
            l=a[0][i];
            for (j=0;j<n;j++)
            {
                if (l>a[j][i])
                l=a[j][i];
            }
            for (j=0;j<n;j++)
            a[j][i]=a[j][i]-l;
        }
        s=a[1][1]+s;

        for (i=0;i<n;i++)
        {
            for (j=1;j<n-1;j++)
            a[i][j]=a[i][j+1];
        }
        for (i=1;i<n-1;i++)
        {
            for (j=0;j<n-1;j++)
            a[i][j]=a[i+1][j];
        }
        n--;
    }
    cout <<s <<endl;
    q++;
    }

    return (0);
}
