void Qsort(int a[],int low,int up)
{
    int i,j,k,x;
    if (low>=up) return;
    else
    {
        k=a[low];
        j=low;
        for (i=low;i<=up;i++)
        {
            if (a[i]>k)
            {
                j++;
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
        x=k;
        a[low]=a[j];
        a[j]=x;
        Qsort(a,low,j-1);
        Qsort(a,j+1,up);
        
    }}
/*int main()
{
    int n,i,j,w,l;
    int a[1000],b[1000];
    scanf("%d",&n);
    while(n!=0){
    for(i=0;i<n;i++)
            a[i]=b[i]=0;
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);
    Qsort(a,0,n-1);
    Qsort(b,0,n-1);
    w=l=0;
        j=0;
    for(i=0;i<n;i++)
    {
        while (a[i]<b[j])j++;
        if (j>=n) {l++;continue;}
        else
        {
            if (a[i]>b[j]) w++;
            j++;
        }
    }
    printf("%d\n",w*200-200*l);
    scanf("%d",&n);
    }
}*/
int main()
{
    int know[10000]={0},beknown[10000]={0};
    int n=0,i,x,y,flag,t;
    scanf("%d",&n);
    x=y=1;
    t=0;
know[0]=beknown[0]=-1;
    while(x+y!=0)
    {
        scanf("%d %d",&x,&y);
        know[x]++;
        beknown[y]++;
    }
    flag=0;
    for (i=0;i<n;i++)
    {
        if ((know[i]==0)&&(beknown[i]==n-1)){flag=1;t=i;}
    }
    if (flag==1) printf("%d",t);
    else {
        printf("NOT FOUND");
    }
        
}