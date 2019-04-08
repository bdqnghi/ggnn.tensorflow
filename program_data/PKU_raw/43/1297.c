int main()
{      int m;
    scanf("%d",&m);
    int p[A]={0};
    int i,j;

 p[0]=p[1]=1;
    for(i=2;i<=m;i++)
    {
        if(p[i]==0)
        {
            for(j=2;j<=m/i;j++)
                p[i*j]=1;
        }
    }/*??????*/

    int k;
    for(k=3;k<=m/2;k+=2)
    {
    if(p[k]+p[m-k]==0)
            printf("%d %d\n",k,m-k);
    }


    return 0;
}
