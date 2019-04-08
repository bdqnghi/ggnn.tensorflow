int main()
{
    int a[6][6] = {0}, maxI[6]={0}, JofmaxI[6]={0},
    minJ[6]={0}, n=0;
    int i, j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            cin >> a[i][j];
            if (a[i][j]>maxI[i])
            {
                maxI[i]=a[i][j];
                JofmaxI[i]=j;
            }
        }
    }
    for (j=1;j<=5;j++)
    {
        minJ[j]=a[1][j];
        for (i=2;i<=5;i++)
        {
            if (a[i][j]<minJ[j])
            {
                minJ[j]=a[i][j];
            }
        }
    }
    for (i=1;i<=5;i++)
    {
        if (maxI[i]==minJ[JofmaxI[i]])
        {
            cout << i << " " <<JofmaxI[i]<<" "<<maxI[i]<<endl;
            n++;
        }
    }
    if (n==0) cout << "not found";
    return 0;
}
