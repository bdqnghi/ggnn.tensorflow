
int a[110],la;
int b[110];

int main ()
{
    while (1)
    {
        int f=getchar();
        if (f==-1)
            break;
        a[1]=f;
        for (int i=2;i<=109;i++)
        {
            a[i]=getchar();
            if (a[i]==10)
            {
                la=i-1;
                break;
            }
        }
        for (int i=1;i<=la+1;i++)
            putchar(a[i]);
        for (int i=1;i<=la;i++)
        {
            if (a[i]==')')
            {
                for (int j=i-1;j>=1;j--)
                {
                    if (a[j]==')')
                        break;
                    if (a[j]=='(')
                    {
                        a[i]=0;
                        a[j]=0;
                        break;
                    }
                }
            }
        }
        for (int i=1;i<=la;i++)
        {
            if (a[i]!='('&&a[i]!=')')
                putchar(32);
            if (a[i]=='(')
                putchar('$');
            if (a[i]==')')
                putchar('?');
        }
        putchar (10);
    }
    return 0;
}
