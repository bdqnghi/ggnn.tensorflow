//?? - ????-??????????? 
 

int main()
{
    int num(int n,int*p);
    int n;
    int i=0;
    int*p;
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++) scanf("%d",p+i);
    printf("%d",num(n,p));
    getchar();
    getchar();
    getchar();
       
}
int num(int n,int*p)//???????? 
{
    int i,j,tem=0,a=0;
    int *max=(int*)malloc(sizeof(int)*n);
    max[n-1]=1;
    for(i=n-2;i>=0;i--)
    {
                       tem=0;
                       for(j=n-1;j>i;j--)
                       {
                                         if(p[i]>=p[j])
                                         {
                                                      if(tem<max[j])
                                                      tem=max[j];
                                         }
                       }
                       max[i]=tem+1;
    }
    a=0;
    for(i=0;i<n;i++)
    if(max[i]>a)a=max[i];
    return a;
    
}