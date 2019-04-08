int main()
{
    int *p,i,n,j,k;
    p=(int*)malloc(10000*sizeof(int));
    *(p+1)=*p=1;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&k);
        if(k>2)
        {
            for(i=2;i<k;i++)
            *(p+i)=*(p+i-1)+*(p+i-2);
            printf("%d\n",*(p+k-1));
        }
        else printf("%d\n",*(p+k-1));
    }
}
