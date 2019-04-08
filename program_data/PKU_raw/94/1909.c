int main(){
    int n,i,j,k,e;
    
    int a[500],b[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
                    if(!(a[i]%2==0))
                    {
                                 b[j]=a[i];
                                 j++;
                    }
    }   
    
    for(i=0;i<j;i++)
    {
                    for(k=i;k<j;k++)
                    {
                                    if(b[k]<b[i])
                                    {
                                                 e=b[k];
                                                 b[k]=b[i];
                                                 b[i]=e;
                                    }
                    }
    }
    printf("%d",b[0]);
    for(i=1;i<j;i++)
    {
                    printf(",%d",b[i]);
    }
    
    return 0;
}