int check (int n,int *a,int *b)
{
    int i,j,x,y,*k;
    k=(int *)malloc(n*sizeof(int));
    for (j=0;j<n;j++)
    {
        k[j]=0;
        x=a[0];
        for (i=0;i<n;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=x;
        for (i=0;i<n;i++)
        {
          if (a[i]>b[i])  {k[j]++;}
          if (a[i]<b[i])  {k[j]--;}  
        }  
    }
    x=0;
    y=k[0];
    for (j=1;j<n;j++)
    {
      if (k[j]>y)
      {x=j;
      y=k[j];}  
    }
    return y;
}
int com (const void *e1,const void *e2)
{
    int *p1,*p2;
    p1=(int *)e1;
    p2=(int *)e2;
    return (*p1-*p2);
}
int main()
{
    int s;
    for(s=0;;s++)
    {   
        int n,*a,*b,i,m;
        scanf ("%d",&n);
        if (n==0)  break;
        else {a=(int*)malloc(n*sizeof(int));
        b=(int*)malloc(n*sizeof(int));
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        qsort (a,n,sizeof(int),com);
        qsort (b,n,sizeof(int),com);
        m=200*(check (n,a,b));
        printf("%d\n",m);}
    }
    getchar();
    getchar();
    getchar();
    return 0;  
}