
int compare(int x,int y)
{
    if( x <= y){
        x=(y+1);
    }
    return x;
}

int main(void)
{

    int i,n,r,a,j;
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    for(i=0;i!=n;i++){
        scanf("%d",&p[i]);
    }
    int *q=(int *)malloc(n*sizeof(int));
    for(j=0;j!=n;j++)
    {
        q[j] = 1;
        for(r=0;r!=j;r++){
            if(p[j] <= p[r]){
                q[j]=compare(q[j],q[r]);
            }

        }
    }
    int max;
    max=q[0];
    for(a=0;a<n;a++){
        if(q[a]>max)
        max=q[a];
    }
    printf("%d",max);
return 0;
}
