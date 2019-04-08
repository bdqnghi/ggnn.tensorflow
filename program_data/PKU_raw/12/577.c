
int main()
{
    int i,j,c,m,a[17];
    while (1)
    {

        for (i=1;i<=16;i++)
        {
            a[i]=0;
            m=0;
        }
        for (i=1;i<=16;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==-1) return 0;
            if (a[i]==0)
            {
                c=i;
                break;
            }
        }
        for (i=1;i<c;i++)

            for (j=i;j<c;j++)
            {
                if (a[i]==2*a[j]||a[j]==2*a[i]) m++;
            }
            printf("%d\n",m);
    }


return 0;
}
