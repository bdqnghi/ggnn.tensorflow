int a[1000][1000]={0};
int sum(int n)
{
    int i,j,x,t;
    int p,q;
    if(n==1)return 0;
    for(i=0;i<n;i++)
       {
        x=32767;
        for(j=0;j<n;j++)
           if(x>*(*(a+i)+j))x=*(*(a+i)+j);
        if(x!=0)
        for(j=0;j<n;j++)
           (*(*(a+i)+j))-=x;        
        }
    for(i=0;i<n;i++)
       {
        x=32767;
        for(j=0;j<n;j++)
           if(x>*(*(a+j)+i))x=*(*(a+j)+i);
        if(x!=0)
        for(j=0;j<n;j++)
           (*(*(a+j)+i))-=x;
        }
        t=*(*(a+1)+1);
    for(i=1;i<n-1;i++)
       for(j=0;j<n;j++)
          *(*(a+i)+j)=*(*(a+i+1)+j);
    for(i=1;i<n-1;i++)
       for(j=0;j<n-1;j++)
          *(*(a+j)+i)=*(*(a+j)+i+1);
    return (t+sum(n-1));
}
int main()
{
    int n,i,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {for(p=0;p<n;p++)
           for(q=0;q<n;q++)
               scanf("%d",&a[p][q]);
        printf("%d\n",sum(n));
       }
    return 0;
}
