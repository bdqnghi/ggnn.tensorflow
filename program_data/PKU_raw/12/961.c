int main()
{
    int i,j,k,a[100][16],K,I,b[100]={0};
    for(i=0; ;i++)
    {
        scanf("%d",&a[i][0]);
        if(a[i][0]==-1) break;
        for(j=1; ;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0) break;
        }
        for(k=0;k<=j-1;k++)
        {
            for(K=0;K<=j-1;K++)
            {
                if(a[i][K]==2*a[i][k]) b[i]++;
            }
        }
    }
    for(I=0;I<i;I++)
    printf("%d\n",b[I]);
    return 0;
}
