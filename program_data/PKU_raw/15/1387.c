int main()
{
    int n,i,j,k,l,a[100][100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++) scanf("%d",&a[i][j]);
    }
    for (i=1;i<n;i++)
    {
        for (j=1;j<n;j++) 
        if (a[i][j-1]==0&&a[i-1][j]==0) 
        break;
    if (a[i][j-1]==0&&a[i-1][j]==0) 
    break;
    }
    for (k=0;k<n;k++)
    {
        for (l=0;l<n;l++) 
        if(a[k][l+1]==255&&a[k+1][l]==255&&a[k][l]==0) 
        break;
    if(a[k][l+1]==255&&a[k+1][l]==255&&a[k][l]==0) 
    break;
    }
    printf("%d",(k-i)*(l-j));
}

