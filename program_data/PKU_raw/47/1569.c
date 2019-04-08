int main()
{
int n,i,k,m;
int sz[100];
scanf("%d",&n);
m=n/2;
for(i=0;i<n;i++)
scanf("%d",&sz[i]);
for(i=0;i<m;i++){
k=sz[i];
sz[i]=sz[n-i-1];
sz[n-i-1]=k;}
for(i=0;i<n;i++) 
    if (i<n-1)
    printf("%d ",sz[i]);
   else  printf("%d",sz[i]);

return 0;
}          

