int main()
{
     int n,k=1,i;
     int a[6];
     scanf("%d",&n);
     while(n!=0)
     {
            a[k]=n%10;
            n=(n-a[k])/10;
            k=k+1;
     }
     for(i=1;i<=k-1;i++)
     {
                        printf("%d",a[i]);
     }
     //int q;
     //scanf("%d",&q);
     //printf("%d",q);
     return 0;
   
}
