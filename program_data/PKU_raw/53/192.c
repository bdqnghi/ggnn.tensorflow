void main()
{
int n,a[500]={0},i,u=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&t);
if(a[t]==0){if(u==0)printf("%d",t);else printf(",%d",t);++a[t];++u;}

}
}