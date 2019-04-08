int main()
{
    int an[100][100],i,j,n,s,a,b,flag=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&an[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(an[i][j]==0)
            {
               flag=1;
		break; 
            }
        }
    if(flag==1)
            {
                break;
            }

}
flag=0;
    for(a=n-1;a>=0;a--)
    {
        for(b=n-1;b>=0;b--)
        {
            if(an[a][b]==0)
            {
		flag=1;
                break;
            }
        }
if(flag==1)
            {
                break;
            }
}

    s=(b-j-1)*(a-i-1);
    printf("%d",s);
    return 0;
}

