int main()
{
    int k,m,n,i,j,w,c;
    int **p;
    scanf("%d",&k);
    for(w=0;w<k;w++)
    {
        c=0;
        scanf("%d %d",&m,&n);
        p=(int **)malloc(m*sizeof(int *));
        for(i=0;i<m;i++)
        p[i]=(int *)malloc(n*sizeof(int));
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",p[i]+j);
        if(m==1)
        for(i=0;i<n;i++)
        c=c+p[0][i];
        else
        {
            if(n==1)
            for(i=0;i<m;i++)
            c=c+p[i][0];
            else
            {
                for(i=0;i<n;i++)
                c=c+p[0][i]+p[m-1][i];
                for(i=1;i<m-1;i++)
                c=c+p[i][0]+p[i][n-1];
            }
        }
        printf("%d\n",c);
        for(i=0;i<m;i++)
        free(p[i]);
        free(p);
    }
    return 0;
}