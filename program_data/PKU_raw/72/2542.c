int main()
{
    int mountain[22][22],j,k,m,n;
    scanf("%d %d",&m,&n);
    for (j=0; j<m+2; j++) {
        mountain[j][0]=-1;
        mountain[j][n+1]=-1;
    }
    for (k=1; k<n+1; k++) {
        mountain[0][k]=-1;
        mountain[m+1][k]=-1;
    }
    for (j=1; j<m+1; j++) {
        for (k=1; k<n+1; k++) {
            scanf("%d",&mountain[j][k]);
        }
    }
    for (j=1; j<m+1; j++) {
        for (k=1; k<n+1; k++) {
            if (comp(mountain[j][k],mountain[j-1][k],mountain[j+1][k],mountain[j][k-1],mountain[j][k+1])) {
                printf("%d %d\n",j-1,k-1);
            }
        }
    }
}