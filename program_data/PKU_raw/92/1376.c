int sort(int s[],int n)
{
    int i,j,t;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (s[j]>s[j+1])
            {
                t=s[j];s[j]=s[j+1];s[j+1]=t;
            }
        }
    }
    return 0;
}
int main ()
{
    while (1)
    {
    int a=0,b=0,m,n=0,i,j,k,s[1001],t[1001],x;
    scanf("%d",&n);
    if (n==0) break;
    for (i=0;i<n;i++)
    scanf("%d",&s[i]);
    for (i=0;i<n;i++)
    scanf("%d",&t[i]);
    sort(s,n);
    sort(t,n);
    for (i=0,j=0;i<n;i++)
    {
        if (s[i]>t[j])
        {
            j++;a++;//printf("%d ",s[i]);
        }
        else if (s[i]==t[j])
        {
            for (k=i+1,x=0;k<n;k++)
            {
                if (s[k]<=t[k-i+j]&&s[k]>s[i])
                //printf("%d\n",s[k]);
                {x=1;break;}
            }
            if (x==0)
            {
                j++;b++;
            }
            else
            {
                j++;a++;
                s[k]=0;
            }
        }
    }
    m=200*(a-(n-a-b));
    printf("%d\n",m);
    }
}

