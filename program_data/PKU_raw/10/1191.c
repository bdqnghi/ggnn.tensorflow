int main()
{
    int i,j,max,n;
    int a[30],b[30];
    b[0]=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                     scanf("%d",&a[i]);
                     j=i-1;
                     max=0; 
                     while(j>=0)
                               {
                               if(a[i]<=a[j]&&max<b[j]+1)
                               max=b[j];
                               j--;
                               }
                     b[i]=max+1;
    }
    max=0;
    for(i=0;i<n;i++)
    {
     if (max<b[i])
     max=b[i];
    }    
    printf("%d",max);
    getchar();
}
