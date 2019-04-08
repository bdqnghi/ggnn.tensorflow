void Qsort(int a[],int low,int up)//???????? 
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
    }
    x=k;
    a[low]=a[j];
    a[j]=x;
    Qsort(a,low,j-1);
    Qsort(a,j+1,up);
    
}
int num(int a[],int low,int up)
{
    if(low>=up)
    {return 1;}
    int i,j,b[26]={0};
    j=0;
    for(i=low+1;i<=up;i++)
     {if(a[i]<=a[low])
     {b[j]=num(a,i,up);j++;}}
    Qsort(b,0,25);
    return b[0]+1;
}
int main(void)
{
    int i,j,m,n,c,d;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {b[i]=num(a,i,n-1);}
    Qsort(b,0,n-1);
    printf("%d\n",b[0]);
                      
}