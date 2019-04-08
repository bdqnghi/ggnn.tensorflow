
int main()
{
    int n,a[500],b[500];
    int i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
                     if(a[i]%2!=0){
                                   b[j]=a[i];
                                   j++;
                                   }
                     }
    sort(b,b+j);
    for(i=0;i<j-1;i++)
    printf("%d,",b[i]);
    printf("%d",b[j-1]);
                     
}