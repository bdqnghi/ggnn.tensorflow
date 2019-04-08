int main()
{
    int n,*a,*b,i,j,flag=0;
    scanf("%d\n",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) {scanf("%d",a+i);b[i]=0;}
    for(i=n-1;i>=0;i--)
    {
                       for(j=i-1;j>=0;j--) if(a[i]==a[j]) b[i]=b[i]+1;
                       }
    for(i=0;i<n;i++)
    {
             for(j=i;j<n;j++) {if(b[j]==0) flag=flag+1;}
             if(b[i]==0) {printf("%d",a[i]);
             if(flag>1) printf(" ");}
             flag=0;
             }
     return 0;
}         