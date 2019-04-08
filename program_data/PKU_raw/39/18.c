int main()
{
    int n,i,max,t;
    scanf("%d",&n);
    char a[100][20],d[100],e[100];
    int b[100],c[100],f[100],sum[100]={0},total=0;
    for(i=0;i<n;i++){
        scanf("%s %d %d %c %c %d\n",a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
    }
    for(i=0;i<n;i++){
       if(b[i]>80&&f[i]>0)
       sum[i]+=8000;
       if(b[i]>85&&c[i]>80)
       sum[i]+=4000;
       if(b[i]>90)
       sum[i]+=2000;
       if(b[i]>85&&e[i]=='Y')
       sum[i]+=1000;
       if(c[i]>80&&d[i]=='Y')
       sum[i]+=850;
    }
    for(i=0;i<n;i++)
       total+=sum[i];
    max=sum[0];
    t=0;
    for(i=0;i<n;i++){
        if(max<sum[i]){
           t=i;
           max=sum[i];
        }
    }
    printf("%s\n%d\n%d",a[t],max,total);
    return 0;
} 