int count(int h[25],int num[25],int n)
{
    int count=1,i;
    for(i=0;i<n;i++)
    if(h[i]>h[n]&&num[i]>count) count=num[i];
    count++;
    return(count);
}
int main()
{
    int n,h[25],num[25],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&h[i]);
    num[0]=1;
    for(i=1;i<n;i++)
    num[i]=count(h,num,i);
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(num[i]>num[j]) {temp=num[i];num[i]=num[j];num[j]=temp;}
    printf("%d\n",num[n-1]);
}
