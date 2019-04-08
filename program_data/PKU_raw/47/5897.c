int main()
{
    int n,i;
    scanf("%d",&n);
     int *Stack= (int *)malloc(n*sizeof(int));
     for(i=0;i<n;i++) scanf("%d",Stack+i);
     for(i=n-1;i>=0;i--){if(i==0)printf("%d",*(Stack+i));else printf("%d ",*(Stack+i));}
     return 0;

}
