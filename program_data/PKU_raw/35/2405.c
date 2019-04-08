int main()
{
    int m,n,a[max][max],j,i,k,s;
    scanf("%d,%d",&m,&n);
    for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++) scanf("%d",&a[j][i]);
        }
    for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
                {
                    for(k=0;k<n;k++)
                        {
                            if(a[j][i]<a[j][k])
                                {
                                    goto l;
                                }
                        }
                    for(s=0;s<m;s++)
                        {
                            if(a[j][i]>a[s][i])
                                {
                                    goto l;
                                }
                        }
                    printf("%d+%d",j,i);
                    return 0;
                    l:;
                }
        }
    printf("No");
    return 0;
}
