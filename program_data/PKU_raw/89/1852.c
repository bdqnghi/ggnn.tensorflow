int main()
{
    int i,n,j=0,*p,*q,a,b;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    q=malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        *(p+i)=0;
        *(q+i)=0;
    }
    while (1)
    {
        scanf("%d %d",&a,&b);
        if (a==0&&b==0) break;
        *(p+b)=*(p+b)+1;
        *(q+a)=*(p+a)+1;
    }
    for (i=0;i<n;i++)
    {
        if (*(p+i)==n-1&&*(q+i)==0)
        {printf("%d\n",i);j=1;}
        //printf("%d %d\n",*(p+i),*(q+i));
    }
    if (j==0) printf("NOT FOUND");
}

