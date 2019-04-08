void f(int *p1,int *p2,int m,int n)
{
    do{printf("%d\n",*p2);p2+=n-1;}
    while((p2-p1+1)%n&&(p2-p1+1)<=m*n);
}

int main(int argc, char *argv[])
{
    int r,l,i,j,*q;
    scanf("%d%d",&r,&l);
    int *p[l+r-1];
    int a[r][l];
    for(i=1;i<=r;i++)
    for(j=1;j<=l;j++)
    scanf("%d",&a[i-1][j-1]);
    for(i=1;i<=l;i++)
    p[i-1]=&a[0][i-1];
    for(i=l+1;i<=l+r-1;i++)
    p[i-1]=&a[i-l][l-1];
    q=&a[0][0];
    for(i=1;i<=r+l-1;i++)
    f(q,p[i-1],r,l);
   
    return 0;
}
