int main()
{
    int i,j,k,m,n;
    int **p,**q;
    p=(int **)malloc(100*sizeof(int *));
    for(i=0;i<100;i++)
    {
                      *(p+i)=(int *)malloc(100*sizeof(int));
    }
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",(*(p+i)+j));
                    }
    }
    for(i=0;i<m+n-1;i++)
    {
                        for(j=0;j<=i;j++)
                        {
                                        if((j<m)&&((i-j)<n)){
                                        if(i==0)
                                        {
                                                printf("%d",*(*(p+j)+i-j));
                                        }
                                        else
                                        {
                                                printf("\n%d",*(*(p+j)+i-j));
                                        }}
                        }
    }
        return 0;
}