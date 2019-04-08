int main()
{
    int n,i,j,k,a[100],sum[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){scanf("%d",&k);for(j=1;j<=k;j++){scanf("%d",&a[j]);
    }if(60<=a[k]+3*(k-1)&&58<=a[k-1]+3*(k-2)&&a[k-1]+3*(k-2)<=60)sum[i]=a[k-1];
    else if(60<=a[k]+3*(k-1)&&a[k-1]+3*(k-2)<=57)sum[i]=60-3*(k-1);
    else if(58<=a[k]+3*(k-1)&&a[k]+3*(k-1)<=60)sum[i]=a[k];
    else if(a[k]+3*(k-1)<=57)sum[i]=60-3*k;
    else sum[i]=60-3*(k-2);
    printf("%d\n",sum[i]);}
    return 0;
}
    