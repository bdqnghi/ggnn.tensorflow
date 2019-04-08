int main ()
{
    char a[100];
    int d[100]={0},n;
    char b,c;
    for (int i=0;i<100;i++)
    {
        a[i]=getchar();
        if (a[i]=='\n')
        {
           n=i;
           break;
        }
        b=a[0];
        if (a[i]!=b)
        c=a[i];
    }
    for (int i=1;i<=n/2;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (a[j]==b||d[j]==1)
            continue;
            for (int k=j;k>=0;k--)
            {
                if (a[k]==c||d[k]==1)
                continue;
                cout <<k<<" "<<j<<endl;
                d[j]=1;
                d[k]=1;
                break;
            }
        }
    }
    return 0;
}
    
