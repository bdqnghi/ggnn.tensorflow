int main()
{
    int a[5][5];
    int i,j;
    int m,n,t;
    int a1,a2=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(m=0;m<5;m++)
    {
        for(n=0;n<5;n++)
        {
            for(t=0;t<5;t++)
            {
                if(a[m][n]<a[m][t])
                break;
            }
            if(t!=5)
            continue;
            if((t==5)&&(a[m][n]<=a[0][n])&&(a[m][n]<=a[1][n])&&(a[m][n]<=a[2][n])&&(a[m][n]<=a[3][n])&&(a[m][n]<=a[4][n]))
            {
                cout<<m+1<<" "<<n+1<<" "<<a[m][n]<<endl;
                a2=1;
            }
        }
    }
    if(a2==0)
    cout<<"not found"<<endl;
    return 0;
}
