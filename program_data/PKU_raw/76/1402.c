int main()
{
    int n,i,j,a[N],b[N],c[N],max=0,min;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(b[i]>max){max=b[i];}
    }
    min=max;
    for(i=0;i<n;i++){if(a[i]<min){min=a[i];}}
    for(i=0;i<n;i++)
    {
        a[i]-=min;
        b[i]-=min;
    }
    for(i=0;i<max-min;i++){c[i]=0;}
    for(i=0;i<n;i++)
    {
        for(j=a[i];j<b[i];j++){c[j]=1;}
    }
    for(i=0;i<max-min;i++)
    {
        if(c[i]==0){printf("no");break;}
        if(i==(max-min-1)&&c[i]!=0){printf("%d %d",min,max);}
    }
    return 0;
}

