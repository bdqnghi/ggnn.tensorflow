

int main ()
{
    int n;
    cin >>n;getchar();
    for (int i=1;i<=n;i++)
    { 
        int a[110000],l;
        for (int i=1;i<=100000;i++)
        {
            a[i]=getchar();
            if (a[i]==10)
            {
                l=i-1;
                break;
            }
        }
        int p=0;
        for (int i=1;i<=l;i++)
        {
            int f=0;
            for (int j=1;j<=l;j++)
            {
                if (a[j]==a[i])
                {
                    f++;
                }
            }
            if (f==1)
            { 
                p=1;
                putchar(a[i]);
                break;
            }    
        }
        if (p==0)
            cout <<"no";
        cout <<endl;
    } 
    return 0;
}
