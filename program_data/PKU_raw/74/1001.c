int hui(int x);
int su(int x);
int main()
{
    int m,n,i,j,t=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(hui(i)==1)
        {
                     if(su(i)==1)
                     {
                                 printf("%d",i);
                                 for(j=i+1;j<=n;j++)
                                 if(su(j)==1&&hui(j)==1)break;
                                 if(j<=n)printf(",");
                     }
                     else t++;
        }
        else t++;
    }
    if(t==n-m+1)printf("no"); 
}
int su(int x)
{
    int i,q;
    q=sqrt(x);
    for(i=2;i<=q;i++)
    if(x%i==0)break;
    if(i<=q)return(0);
    else return(1);
}
int hui(int x)
{
    int i,p,sum=0,temp;
    temp=x;
    for(i=1;;i++)
    if(x/(int)pow(10,i)==0)break;
    p=i;
    for(i=p;i>0;i--)
    {
        sum=sum*10+temp%10;
        temp=temp/10;
    }
    if(sum==x)return(1);
    else return(0);
}
