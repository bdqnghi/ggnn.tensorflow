//?? - ??(12-4) ????
int main(void)
{
    char str[MAX], dig[MAX];
    int n, i, t=0, ok=0, j, k=0, a[MAX];
    memset(a, 0, sizeof(a));
    memset(dig,0,sizeof(dig));
    gets(str);
    n = strlen(str);
    for(i=0; i<n; i++)
    {
        if(isdigit(str[i])&&ok)
        {
            for(j=0; j<t-1; j++)
            {
                a[k]+=((int)dig[j]-'0');
                a[k]*=10;
            }
            a[k]+=dig[t-1]-'0';
            k++;
            t=0;
        }
        if(isdigit(str[i]))
        {
            dig[t++]=str[i];

            ok=0;
        }
        if((!ok)&&(!isdigit(str[i])))
            ok=1;
    }

    for(j=0; j<t-1; j++)
    {
        a[k]+=(dig[j]-'0');
        a[k]*=10;

    }
    a[k]+=dig[t-1]-'0';

    for(i=0; i<=k; i++)
    {
        if(a[i]>=0)
            printf("%d\n",a[i]);
    }

    return ;
}
