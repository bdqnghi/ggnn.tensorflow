int main ()
{
    int i,n;
    scanf("%d",&n);
    int q[100];
    for(i=0;i<n;i=i+1){
        scanf("%d",&(q[i]));
    }
    for(i=n-1;i>=1;i=i-1){
    printf("%d ",q[i]);
    }
    printf("%d",q[0]);
    return 0;
}
