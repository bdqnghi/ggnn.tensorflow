int main()
{
    int n,i,j,m=0,a,b,c=0;
    int *p;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=2;i<=n;i++)
    {
        a=(int )sqrt(i);
        for(j=2;j<=a;j++) if(i%j==0) break;
        if(j>a)  {p[m]=i;m++;}         
    }
    for(i=0;i<m-1;i++) if(p[i+1]-p[i]==2) {printf("%d %d\n",p[i],p[i+1]);c++;}
    if(c==0) printf("empty");
 
}
